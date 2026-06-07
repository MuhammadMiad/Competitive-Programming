#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
     int data,height;
     Node *left,*right;

     Node(int val){
      data=val;
      height=1;
      left=right=NULL;
     }
};
///find height function
int getheight(Node *root){
 if(!root)return 0;
 return root->height;
}
///Balance function
int getbalance(Node *root){
return getheight(root->left)-getheight(root->right);
}
///Create RightRotation
Node *rightRotation(Node *root){
Node *child=root->left;
Node *childright=child->right;
child->right=root;
root->left=childright;

///Updata the height
root->height =1+max(getheight(root->left),getheight(root->right));
child->height=1+max(getheight(child->left),getheight(child->right));
return child;
}
///Create leftRotation
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
Node *insertion(Node *root,int key){
 ///Does not exist;
 if(!root)
    return new Node(key);

 ///Exists Node
 if(key<root->data)
    root->left=insertion(root->left,key);
 else if(key>root->data)
    root->right=insertion(root->right,key);
 else return root;///Duplicate element are not allowed.

 ///update height
 root->height=1+max(getheight(root->left),getheight(root->right));

///Balance Cheack
int balance =getbalance(root);

///left left Case
if(balance >1 && key<root->left->data)
    return rightRotation(root);
///right right case
else if(balance<-1&&key>root->right->data)
    return leftRotation(root);
///left right case
else if(balance>1 &&key>root->left->data){
    root->left=leftRotation(root->left);
    return rightRotation(root);
}
//right left case
else if(balance<-1&&key<root->right->data){
    root->right=rightRotation(root->right);
    return leftRotation(root);
}
///Balancing
else return root;

}

void inorder(Node *root){
 if(root==NULL)return;
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}
int main(){
  Node *root=NULL;
  root=insertion(root,10);
  root=insertion(root,20);
  root=insertion(root,40);
  root=insertion(root,6);
  root=insertion(root,7);
  root=insertion(root,17);
  root=insertion(root,2);

  inorder(root);

return 0;
}
