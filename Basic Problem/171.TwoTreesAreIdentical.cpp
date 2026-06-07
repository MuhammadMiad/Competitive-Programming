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
bool isIdentical(Node *root1,Node *root2){
  if(!root1&&!root2)return 1;
  if((!root1&&root2)||(root1&&!root2))return 0;
  if(root1->data!=root2->data)return 0;
  return isIdentical(root1->left,root2->left)&&isIdentical(root1->right,root2->right);
}
int main()
{
    ///First Tree
    int x;
    cout<<"Enter the root element of first Tree:";
    cin>>x;
    Node *root1=new Node(x);
    queue<Node*>q;
    q.push(root1);
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
    ///Second Tree

    cout<<"Enter the root element of Second Tree:";
    cin>>x;
    Node *root2=new Node(x);
    queue<Node*>q1;
    q1.push(root2);
    int first1,second1;
    while(!q1.empty()){
        Node *temp=q1.front();
        q1.pop();
        cout<<"Enter the left child of "<<temp->data<<" :";
        cin>>first1;
        if(first1!=-1){
        temp->left=new Node(first1);
        q1.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<" :";
        cin>>second1;
        if(second1!=-1){
        temp->right=new Node(second1);
        q1.push(temp->right);
        }
    }
    bool ans=isIdentical(root1,root2);
    if(ans)cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}




