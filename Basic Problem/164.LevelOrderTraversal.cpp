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
void LevelOrder(Node *root,vector<int>&ans){
   queue<Node*>q;
   q.push(root);
   Node *temp;
   while(!q.empty()){
    temp=q.front();
    q.pop();
    ans.push_back(temp->data);
    if(temp->left)q.push(temp->left);
    if(temp->right)q.push(temp->right);
   }

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
    vector<int>ans;
    LevelOrder(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
