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
    int arr[]= {1,2,2,3,4,4,5,6,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    int index=0;
    head=CreateLinkedList(arr,index,n);

    ///Starting Remove Duplicates from a sorted linked
///Method-1
//    vector<int>ans;
//    ans.push_back(head->data);
//    Node *temp=head;
//    while(temp)
//    {
//        if(ans[ans.size()-1]!=temp->data)
//            ans.push_back(temp->data);
//
//        temp=temp->next;
//    }
//    int Size=ans.size();
//    index=0;
//    Node *curr=head,*prev=NULL;
//    while(index<Size)
//    {
//        prev=curr;
//        curr->data=ans[index];
//        index++;
//        curr=curr->next;
//    }
//    prev->next=NULL;

///Method -2
    Node *curr=head->next;
    Node *prev=head;
    while(curr)
    {
        if(prev->data==curr->data)
        {
            prev->next=curr->next;

            delete curr;
            curr=prev->next;
        }
        else
        {
            curr=curr->next;
            prev=prev->next;
        }
    }


    Node *tem=head;

    while(tem!=NULL)
    {
        cout<<tem->data<<"->";
        tem=tem->next;
    }

    return 0;
}
