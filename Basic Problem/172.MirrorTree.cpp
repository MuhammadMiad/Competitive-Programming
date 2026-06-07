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
void MirrorTree(Node *root){
  if(!root)return;
  Node *temp=root->left;
  root->left=root->right;
  root->right=temp;

  MirrorTree(root->left);
  MirrorTree(root->right);
}

void display(Node *root){
 if(!root)return;
 cout<<root->data<<" ";
 display(root->left);
 display(root->right);
}

int main()
{
    int x;
    cout<<"Enter the root element of:";
    cin>>x;
    Node *root=new Node(x);
    queue<Node*>q;
    q.push(root);
    int first,second;
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" :";
        cin>>first;
        if(first!=-1){
        temp->left=new Node(first);
        q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<" :";
        cin>>second;
        if(second!=-1){
        temp->right=new Node(second);
        q.push(temp->right);
        }
    }
    cout<<"Before MirrorTree:"<<endl;
     display(root);
     MirrorTree(root);
     cout<<"\nAfter Mirror Tree:"<<endl;
     display(root);
    return 0;
}





