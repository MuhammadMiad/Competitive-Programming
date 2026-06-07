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

int main()
{
    int arr[]= {1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *head=NULL;
    Node *tail=NULL;
    for(int i=0; i<n; i++)
    {
        if(head==NULL)
        {
            head=new Node(arr[i]);
            tail=head;
        }
        else
        {
            Node *temp=new Node(arr[i]);
            tail->next=temp;
            tail=temp;
            tail->next=head;///Circular linked list
        }
    }
    ///Starting Detect Loop in Linked list

    ///Slow and Fast Pointer Useing
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow ==fast)break;
    }

    if(fast==NULL||fast->next==NULL)
    {
        cout<<"Length of Loop:0"<<endl;
        return 0;
    }
    int count=1;
    slow=fast->next;
    while(slow!=fast)
    {

        count++;
        slow=slow->next;
    }
    cout<<"Lenght Of Loop: "<<count<<endl;

    return 0;
}


