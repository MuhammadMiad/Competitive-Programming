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
Node* CreateLinkedList(int arr[],int index,int n)
{
    if(index==n)return NULL;

    Node *temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,n);
    return temp;
}

int main()
{
    int arr[]= {2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *head=NULL;
    head=CreateLinkedList(arr,0,n);

    int val=30;
    int k=3;
    Node *temp=head;
    while(k--)
    {
        temp=temp->next;
    }
    Node *temp2=new Node(val);
    temp2->next=temp->next;
    temp->next=temp2;


    Node *temp3=head;
    while(temp3!=NULL)
    {
        cout<<temp3->data<<"->";
        temp3=temp3->next;
    }

    return 0;
}
