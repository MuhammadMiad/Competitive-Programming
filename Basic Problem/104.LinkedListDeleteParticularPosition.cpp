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
     return  temp;
 }
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    int index=0;
    head=CreateLinkedList(arr,index,n);
    int x=1;
    if(x==1){
      Node *temp=head;
      head=head->next;
      delete temp;
    }else{
        Node *curr=head;
        Node *prev=NULL;
        x--;
        while(x--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
       }

    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

return 0;
}


