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
 Node *CreateLinkedList(int arr[],int index,int n,Node *prev){
     if(index==n)return prev;

     Node *temp=new Node(arr[index]);
     temp->next=prev;
     return CreateLinkedList(arr,index+1,n,temp);
 }
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    int index=0;
    head=CreateLinkedList(arr,index,n,head);

    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

return 0;
}
