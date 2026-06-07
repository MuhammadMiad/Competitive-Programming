#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
       int data;
       Node *prev,*next;
       Node(int value){
         data=value;
         prev=next=NULL;
       }
};
Node *CreateDoublyLL(int arr[],int index,int n,Node *bk){
  if(index==n)return NULL;

  Node *temp=new Node(arr[index]);
  temp->prev=bk;
  temp->next=CreateDoublyLL(arr,index+1,n,temp);
  return temp;
}
int main(){
int arr[]={10,20,30,40,50};
int n=sizeof(arr)/sizeof(arr[0]);

Node *head=NULL;
int index=0;
head=CreateDoublyLL(arr,index,n,NULL);

///Starting Deletion at Given position
int pos=2;
if(pos==1){
    //if only one node exist
    if(head->next==NULL){
        delete head;
        head=NULL;
    }
    //if more than 1 node exist
    else{
         Node *temp=head;
          head=head->next;
          delete temp;
          head->prev=NULL;

    }
}
 else{
    Node *curr=head;
    while(--pos){
        curr=curr->next;
    }
    //if delete at end
    if(curr->next==NULL){
        curr->prev->next=NULL;
        delete curr;
    }
    //delete middle node
    else{
        curr->prev->next=curr->next;
        curr->next->prev=curr->prev;
        delete curr;
    }
 }

Node *temp=head;
while(temp){
    cout<<temp->data<<"->";
    temp=temp->next;
}
return 0;
}

