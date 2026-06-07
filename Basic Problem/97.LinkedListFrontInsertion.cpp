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
int arr[]={2,3,4,5,6,7,8,9};
Node *head;
head=NULL;

for(int i=0;i<8;i++){
    if(head==NULL){
        head=new Node(arr[i]);
    }
    else{
        Node *temp=new Node(arr[i]);
        temp->next=head;
        head=temp;
    }
}

while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
}



}
