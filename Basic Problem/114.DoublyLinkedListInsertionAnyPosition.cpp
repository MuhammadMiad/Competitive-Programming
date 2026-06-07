#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev,*next;
    Node(int value)
    {
        data=value;
        prev=next=NULL;
    }
};
Node *CreateDoublyLL(int arr[],int index,int n,Node *bk)
{
    if(index==n)return NULL;

    Node *temp=new Node(arr[index]);
    temp->prev=bk;
    temp->next=CreateDoublyLL(arr,index+1,n,temp);
    return temp;
}
int main()
{
    int arr[]= {10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    int index=0;
    head=CreateDoublyLL(arr,index,n,NULL);

///Starting Insertion at any position
    int pos=1;
    int val=100;
///Insert at start
    if(pos==0)
    {
        if(head==NULL)
        {
            head=new Node(val);
        }
        else
        {
            Node *temp=new Node(val);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }

    }
    else
    {
        Node *curr=head;
        while(--pos)
        {
            curr=curr->next;
        }
        ///Insert at End
        if(curr->next==NULL)
        {
            Node *temp=new Node(val);
            curr->next=temp;
            temp->prev=curr;
        }
        ///Insert at middle
        else
        {
            Node *temp=new Node(val);
            temp->next=curr->next;
            curr->next=temp;
            temp->prev=curr;
            temp->next->prev=temp;

        }

    }

    Node *temp1=head;
    while(temp1)
    {
        cout<<temp1->data<<"->";
        temp1=temp1->next;
    }
    return 0;
}
