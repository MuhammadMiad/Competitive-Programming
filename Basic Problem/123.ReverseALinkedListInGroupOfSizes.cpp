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

 Node *reverseIt(Node *head, int k) {

        if(head==NULL || k == 1)
        return head;


        int count = 0;

        Node* curr = head,*prev = NULL,*front = NULL;

        while(curr!=NULL && count<k){

            front= curr->next;

            curr->next = prev;

            prev = curr;

            curr = front;

            count++;

        }

        if(curr!=NULL){

            head->next = reverseIt(curr,k);
        }

        return prev;

    }
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    int index=0;
    head=CreateLinkedList(arr,index,n);
    int k=3;
    head=reverseIt(head,k);
    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

return 0;
}

