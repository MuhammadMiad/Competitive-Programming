#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left,*right;
    Node(int value){
    data=value;
    left=right=NULL;
    }
};
int main(){
 int x;
 cout<<"Enter the root element:";
 cin>>x;
 queue<Node*>q;
 Node *root=new Node(x);
 q.push(root);
 int first,second;
 ///Build the Binary Tree.
 while(!q.empty()){
    Node *temp=q.front();
    q.pop();
    ///left Child create
    cout<<"Enter the Left Child of "<<temp->data<<" : ";
    cin>>first;
    if(first!=-1){
        temp->left=new Node(first);
        q.push(temp->left);
    }
    ///Right Child create
    cout<<"Enter the Right Child of "<<temp->data<<" : ";
    cin>>second;
    if(second!=-1){
        temp->right=new Node(second);
        q.push(temp->right);
    }
 }

return 0;
}
