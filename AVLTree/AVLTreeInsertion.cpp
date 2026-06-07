#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data,height;
    Node *left,*right;

    Node (int value){
    data=value;
    height=1;
    left=right=NULL;
    }

};

///Height function
int getheight(Node *root){
if(!root)
    return 0;

    return root->height;
}

///Balance function
int  getbalance(Node *root){
return getheight(root->left)-getheight(root->right);
}

///Create RightRotation function
Node *rightRotation(Node *root){
  Node *child=root->left;
  Node *childRight=child->right;
  child->right=root;
  root->left=childRight;

  ///Update the height
 root->height=1+max(getheight(root->left),getheight(root->right));
 child->height=1+max(getheight(child->left),getheight(child->right));
 return child;

}

///Create LeftRotation function
Node *leftRotation(Node *root){
 Node *child=root->right;
 Node *childleft=child->left;
 child->left=root;
 root->right=childleft;

 ///Update the height
 root->height=1+max(getheight(root->left),getheight(root->right));
 child->height=1+max(getheight(child->left),getheight(child->right));
 return child;
}

Node *Insert(Node *root,int key){
///Doesn't exist
if(!root)
    return new Node(key);
///Exist
if(root->data>key)
    root->left=Insert(root->left,key);
else if(root->data<key)
    root->right=Insert(root->right,key);
else
    return root;///Duplicate elements are not allowed


  ///Update height

  root->height=1+max(getheight(root->left),getheight(root->right));

 ///Balance Cheak
 int balance=getbalance(root);

 ///Left Left Case
 if(balance>1&&key<root->left->data)
    return rightRotation(root);

 ///Right Right Case
 else if(balance<-1&& key>root->right->data)
    return leftRotation(root);

 ///Left Right case
 else if(balance>1&&key>root->left->data)
 {
     root->left=leftRotation(root->left);
     return rightRotation(root);
 }

 ///Right Left Case
 else if(balance<-1&&key<root->right->data)
 {
     root->right=rightRotation(root->right);
     return leftRotation(root);
 }

 ///No Unbalancing
 else
    return root;

}

void preorder(Node *root){
if(!root)return;

cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

void inorder(Node *root){
if(!root)return ;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

int main(){
    ///Duplicate elements not allowed
Node *root=NULL;

root = Insert(root,10);
root = Insert(root,20);
root = Insert(root,30);
root = Insert(root,50);
root = Insert(root,70);
root = Insert(root,5);
root = Insert(root,100);
root = Insert(root,95);


 cout<<"Preorder:"<<endl;
  preorder(root);
 cout<<endl<<"Inorder:"<<endl;
 inorder(root);

return 0;
}
