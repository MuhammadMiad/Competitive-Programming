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
Node *BinaryTree(){
 int x;
 cin>>x;
 if(x==-1){
    return NULL;
 }
 Node *temp=new Node(x);
 ///left side create
 cout<<"Enter the left child of "<<x<<" :";
 temp->left=BinaryTree();
 ///right side create
 cout<<"Enter the Right child of "<<x<<" :";
 temp->right=BinaryTree();
 return temp;
}
void Preorder(Node *root){
 if(root==NULL)return;

cout<<root->data<<" ";
Preorder(root->left);
Preorder(root->right);
}
int main(){
cout<<"Enter the root element:";
Node *root=BinaryTree();
Preorder(root);
return 0;
}
