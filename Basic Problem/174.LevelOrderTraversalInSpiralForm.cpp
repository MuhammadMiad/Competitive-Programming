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
vector<int>LevelOrderSpiral(Node *root){
 stack<Node*>st1;
 stack<Node*>st2;
 vector<int>ans;
 st1.push(root);
 while(!st1.empty()||!st2.empty()){
    if(!st1.empty()){
        while(!st1.empty()){
            Node *temp=st1.top();
            st1.pop();
            ans.push_back(temp->data);
            if(temp->right)st2.push(temp->right);
            if(temp->left)st2.push(temp->left);
        }
    }
    else{
        while(!st2.empty()){
            Node *temp=st2.top();
            st2.pop();
            ans.push_back(temp->data);
            if(temp->left)st1.push(temp->left);
            if(temp->right)st1.push(temp->right);
        }
    }

 }
 return ans;
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
    vector<int>ans=LevelOrderSpiral(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}






