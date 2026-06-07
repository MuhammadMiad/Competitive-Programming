#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left,*right;

    Node (int value)
    {
        data=value;
        left=right=NULL;
    }
};

void preOrder(Node *root)
{
    if(root==NULL)return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void INOrder(Node *root)
{
    if(root==NULL)return;
    INOrder(root->left);
    cout<<root->data<<" ";
    INOrder(root->right);
}
void postOrder(Node *root)
{
    if(root==NULL)return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    int x;
    cout<<"Enter the root element:";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root=new Node(x);
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" : ";
        cin>>first;
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<" : ";
        cin>>second;
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
        }

    }
    cout<<"PreOrder:";
    preOrder(root);
    cout<<endl;
    cout<<"INOrder:";
    INOrder(root);
    cout<<endl;
    cout<<"PostOrder:";
    postOrder(root);
    cout<<endl;
    return 0;
}
