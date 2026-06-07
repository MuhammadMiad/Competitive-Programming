#include<bits/stdc++.h>
using namespace std;
struct Node {
int value;
Node *left;
Node *right;
};
Node *BST( Node *root,int key){
  Node *newNode=(Node*)malloc(sizeof(Node));
  newNode->value=key;
  newNode->left=NULL;
  newNode->right=NULL;

  Node *x=root;
  Node *y=NULL;
  while(x!=NULL){
    y=x;
    if(x->value>key) x=x->left;
    else x=x->right;
  }
  if(y==NULL)y=newNode;
  else if(y->value>key)y->left=newNode;
  else y->right=newNode;
  return y;
}
void Inorder(Node *root){
 if(root==NULL)return;
 else{
    Inorder(root->left);
    cout<<root->value<< " ";
    Inorder(root->right);
 }

}
int main(){
    Node *root=NULL;
int n;
cin>>n;
int co=0;
while(n--){
    int key;
    cin>>key;
    if(co==0){
      root=BST(root,key);
      co++;
    }
    else BST(root,key);

}
Inorder(root);



return 0;
}
