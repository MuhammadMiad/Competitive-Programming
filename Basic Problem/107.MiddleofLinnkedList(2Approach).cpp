#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }

};
Node *CreateNode(int arr[],int index,int n)
{
    if(n==index)return NULL;
    Node *temp=new Node(arr[index]);
    temp->next=CreateNode(arr,index+1,n);
    return temp;
}
Node *MidleOfLinkedlist(Node *head){
    Node *temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    cnt/=2;
    temp=head;
    while(cnt--){
        temp=temp->next;
    }
    return temp;
}

 Node *MidleOfLinkedlist2(Node *head){
  Node *slow=head,*fast=head;
  while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  return slow;
 }

int main()
{
    int arr[]= {10,20,30,40,50};
    Node *head=NULL;
    head=CreateNode(arr,0,5);

  ///Approach -1
   // Node *temp=MidleOfLinkedlist(head);

 ///Approach -2 Slow ponter and fast pointer
  Node *temp=MidleOfLinkedlist2(head);
    while(temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    return 0;
}


