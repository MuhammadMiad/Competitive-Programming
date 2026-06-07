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
    ///Method-1
//     unordered_map<Node*,bool>visited;
//        Node *curr=head;
//        while(curr){
//            if(visited[curr]==1){
//                cout<<"Loop is Present"<<endl;
//                return 0;
//            }
//
//            visited[curr]=1;
//            curr=curr->next;
//        }
//     cout<<"Loop Not present."<<endl;
///Method-2

    Node* slow=head;
    Node *fast=head;
    while(fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            cout<<"Loop is Present"<<endl;
            return 0;
        }
    }
    cout<<"Loop is not present."<<endl;

    return 0;
}

