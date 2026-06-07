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
///Method-1
//void TotalSize(Node *root,int &cnt){
//    if(root==NULL)
//        return;
//    cnt++;
//    TotalSize(root->left,cnt);
//    TotalSize(root->right,cnt);
//   }

///Method-2
int TotalSize(Node* root){
  if(root==NULL)return 0;
  return 1+TotalSize(root->left)+TotalSize(root->right);
}
int main()
{
    int x;
    cout<<"Enter the root element:";
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
//    int cnt=0;
//    TotalSize(root,cnt);
int cnt= TotalSize(root);
    cout<<cnt<<endl;
    return 0;
}
