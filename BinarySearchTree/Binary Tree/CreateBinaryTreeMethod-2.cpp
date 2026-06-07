#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left,*right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
Node *BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1)return NULL;
    Node *temp=new Node(x);
    cout<<"Enter the left child of "<<x<<" :";
    temp->left=BinaryTree();
    cout<<"Enter the  right child of "<<x<<" :";
    temp->right=BinaryTree();
    return temp;

}

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
    cout<<"Enter the root element:";
    Node *root;
    root=BinaryTree();
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
