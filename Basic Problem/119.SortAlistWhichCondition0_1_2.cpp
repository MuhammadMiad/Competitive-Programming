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
Node *CreateLinkedList(int arr[],int index,int n)
{
    if(index==n)return NULL;

    Node *temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,n);
    return temp;
}
int main()
{
    int arr[]= {1,2,1,0,2,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    int index=0;
    head=CreateLinkedList(arr,index,n);
///Starting Sort a list which contain 0,1,2
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    Node *temp=head;
    while(temp)
    {
        if(temp->data==0)cnt1++;
        if(temp->data==1)cnt2++;
        if(temp->data==2)cnt3++;

        temp=temp->next;
    }

    Node *curr=head;
    while(cnt1--)
    {
        curr->data=0;
        curr=curr->next;
    }
    while(cnt2--)
    {
        curr->data=1;
        curr=curr->next;
    }
    while(cnt3--)
    {
        curr->data=2;
        curr=curr->next;
    }

    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    return 0;
}

