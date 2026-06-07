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
vector<int>MaxValueEachL(Node* root){
  vector<int>ans;
  queue<Node*>q;
  q.push(root);

  while(!q.empty()){
    int size=q.size();
    int mx=0;
    for(int i=0;i<size;i++){
        Node *temp=q.front();
        q.pop();
        mx=max(mx,temp->data);
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
    ans.push_back(mx);
  }
  return ans;
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
    vector<int>ans=MaxValueEachL(root);
    for(auto it:ans)cout<<it<<" ";
    return 0;
}



