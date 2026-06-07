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
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    int index=0;
    head=CreateLinkedList(arr,index,n);
    int k=3;
    if(head==NULL || head->next==NULL ||k==0){
        cout<<head->data<<endl;
        return 0;
    }
    Node *temp=head;
    ///count the node and store last node
    int cnt=1;
    while(temp->next){
        temp=temp->next;
        cnt++;
    }
    k%=cnt;
    ///Find the position
    Node *lastNode=head;
    while(k--){
       lastNode=lastNode->next;
    }
    ///Head ke ekebare last noder sathe zukto kori
    temp->next=head;
    Node *newNode=lastNode->next;
    lastNode->next=NULL;



    Node *temp1=newNode;
    while(temp1!=NULL){
        cout<<temp1->data<<"->";
        temp1=temp1->next;
    }

return 0;
}

