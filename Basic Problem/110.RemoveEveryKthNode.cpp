#include<bits/stdc++.h>
using namespace std;
 class Node{
  public:
      int data;
      Node *next;

      Node(int value){
        data=value;
        next=NULL;
      }

 };
 Node *CreateLinkedList(int arr[],int index,int n){
     if(index==n)return NULL;

     Node *temp=new Node(arr[index]);
     temp->next=CreateLinkedList(arr,index+1,n);
     return temp;
 }
 void Display(Node *head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }

 }
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    int index=0;
    head=CreateLinkedList(arr,index,n);
    cout<<"Before Linked List:"<<endl;
    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    ///Starting part of Remove every kth Node
    int k=2;
    int cnt=1;
    Node *curr=head,*prev=NULL;
    while(curr){
            if(cnt==k){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
                cnt=1;
            }
            else {
                prev=curr;
                curr=curr->next;
                cnt++;
            }
    }
    Display(head);

    ///Ending part of Remove every kth Node



return 0;
}

