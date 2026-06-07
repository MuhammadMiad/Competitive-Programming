
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
//void CountNonLeavesNode(Node *root,int &cnt){
//    if(root==NULL)
//        return;
//    if(root->left||root->right)
//       cnt++;
//    CountNonLeavesNode(root->left,cnt);
//    CountNonLeavesNode(root->right,cnt);
//   }

///Method-2
int CountNonLeavesNode(Node* root){
  if(root==NULL)return 0;
  if(!root->left&&!root->right)return 0;
  return 1+CountNonLeavesNode(root->left)+CountNonLeavesNode(root->right);
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
    int cnt=0;
   // CountNonLeavesNode(root,cnt);
   cnt= CountNonLeavesNode(root);
    cout<<cnt<<endl;
    return 0;
}


