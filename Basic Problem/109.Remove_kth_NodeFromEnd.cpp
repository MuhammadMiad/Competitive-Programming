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
    cout<<"Before Linked lsit:"<<endl;
    Node *temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<"->";
        temp1=temp1->next;
    }
    cout<<endl<<endl;
  ///Starting Part of remove kth node from end
    int k=3;
    int cnt=0;
    Node *temp=head;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    cnt-=k;
    while(cnt==0){
        temp=head;
        head=head->next;
        delete temp;
        Display(head);
    }
    Node *curr=head,*prev=NULL;
    while(cnt--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
    Display(head);
   ///Ending part of remove kth node from end

return 0;
}

