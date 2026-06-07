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

Node *temp=head;
while(temp){
    cout<<temp->data<<"->";
    temp=temp->next;
}
return 0;
}
