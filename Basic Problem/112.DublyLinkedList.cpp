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
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *head,*tail;
    head=tail=NULL;
    for(int i=0;i<n;i++){
        if(!head and !tail){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
            Node *temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }


    Node *trav=head;
    while(trav){
        cout<<trav->data<<"->";
        trav=trav->next;
    }


return 0;
}
