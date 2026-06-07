#include<bits/stdc++.h>
using namespace std;
struct Node{
     public:
         int data;
         Node *left,*right;

        Node(int val){
        data=val;
        left=right=NULL;
        }
};
Node *BST(Node *root,int target){
 if(!root){
    Node *temp=new Node(target);
    return temp;
 }

 if(root->data>target){
    root->left=BST(root->left,target);
 }
 else{
    root->right=BST(root->right,target);
 }
return root;
}
void inorder(Node *root){
   if(!root)return;

   inorder(root->left);
   cout<<root->data<< " ";
   inorder(root->right);

}
Node *deleteNode(Node *root,int x){
 if(!root)return NULL;

  if(root->data>x){
    root->left=deleteNode(root->left,x);
    return root;
  }
  else if(root->data<x){
    root->right=deleteNode(root->right,x);
    return root;
  }
  else {
      //leaf Node delete
      if(!root->left&&!root->right){
        delete root;
        return NULL;
      }
      //right node exists
      else if(!root->left){
        Node *temp=root->right;
        delete root;
        return temp;
      }
      //left node exists
      else if(!root->right){
        Node*temp=root->left;
        delete root;
        return temp;
      }
      //both node exists
      else{
         Node *child=root->left;
         Node *parent=root;
         while(child->right){
            parent=child;
            child=child->right;
         }

         if(parent!=root){
            parent->right=child->left;
            child->left=root->left;
            child->right=root->right;
            delete root;
            return child;
         }
         else{
            child->right=root->right;
            delete root;
            return child;
         }
      }

  }
}
int main(){
    int arr[]={6,11,4,3,9,12,16,45};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node *root=NULL;
    for(int i=0;i<n;i++){
        root=BST(root,arr[i]);
    }

    inorder(root);
    cout<<endl;
    int x=16;
    Node *root2=deleteNode(root,x);
    inorder(root2);

return 0;
}
