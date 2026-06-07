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
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,5,6,7};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);

    Node *head1=NULL;
    Node *head2=NULL;
    int index=0;
    head1=CreateLinkedList(arr1,index,n);
    head2=CreateLinkedList(arr2,index,m);
///Starting Merge Two SortedLinked list
    Node *head=new Node(0);
    Node *tail=head;
    while(head1&&head2){
        if(head1->data<=head2->data){
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
        }
        else{
            tail->next=head2;
            head2=head2->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }
    if(head1){
        tail->next=head1;
    }
    else if(head2){
        tail->next=head2;
    }
    tail=head;
    head=head->next;
    delete tail;


    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

return 0;
}
