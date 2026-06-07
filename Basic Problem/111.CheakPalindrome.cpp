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
int main(){
    int arr[]={1,2,3,2,1};
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

    if(head->next==NULL){
        cout<<"Palindrome"<<endl;
        return 0;
    }
    int cnt=0;
    Node *temp1=head;
    while(temp1){
        cnt++;
        temp1=temp1->next;
    }
    cnt/=2;
    Node *curr=head,*prev=NULL;
    while(cnt--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;

    ///Reverse second list
    Node *fut=NULL;
    prev=NULL;
    while(curr){
        fut=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fut;
    }
    ///Head is pointing to first list
    ///prev is pointing to second list
    Node *head1=head,*head2=prev;
    while(head1){
        if(head1->data!=head2->data){
            cout<<"NOt palindrome"<<endl;
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
    cout<<"Palindrome"<<endl;

    ///Ending part of Remove every kth Node



return 0;
}


