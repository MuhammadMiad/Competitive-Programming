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
Node *Reverse(Node *curr,Node *prev)
{
    if(curr==NULL)return prev;

    Node *fut=curr->next;
    curr->next=prev;
    prev=curr;
    return Reverse(fut,curr);

}
int main()
{
    int arr[]= {10,20,30,40,50};
    Node *head=NULL;
    head=CreateNode(arr,0,5);

    cout<<"Before Reverse :"<<endl;
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    ///Approach-1
//    vector<int>ans;
//    Node *curr=head;
//    while(curr){
//        ans.push_back(curr->data);
//        curr=curr->next;
//    }
//    int i=ans.size()-1;
//    curr=head;
//    while(curr){
//        curr->data=ans[i--];
//        curr=curr->next;
//    }

    ///Approach -2
//  Node *curr=head,*prev=NULL,*fut=NULL;
//  while(curr){
//  fut=curr->next;
//  curr->next=prev;
//  prev=curr;
//  curr=fut;///current ke samne aganor jonno.
//  }
//
//  head=prev;

///Approach -3 Using Recursion
    head =Reverse(head,NULL);

    ///Print After Reverse Node:"<<endl;
    cout<<"\n\nAfter Reverse :"<<endl;
    Node *temp1=head;
    while(temp1)
    {
        cout<<temp1->data<<"->";
        temp1=temp1->next;
    }

    return 0;
}
