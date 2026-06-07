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
int main(){
 int arr[]={2,3,4,5,6,7,8,9,10};
 Node *head,*tail;
 head=tail=NULL;

 for(int i=0;i<9;i++){
    if(head==NULL){
        head=new Node(arr[i]);
        tail=head;
    }
    else{
     tail->next=new Node(arr[i]);
     tail=tail->next;
    }
//    else {
//        Node *temp=new Node(arr[i]);
//        tail->next=temp;
//        tail=temp;
//    }

 }


  Node *temp=head;
 while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
 }
return 0;
}
