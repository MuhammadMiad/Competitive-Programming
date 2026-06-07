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

int main()
{
    int arr[]= {10,20,30,40,50};
    Node *head=NULL;
    head=CreateNode(arr,0,5);


    temp=MiddleOfLinkedlist(head);
    while(temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    return 0;
}

