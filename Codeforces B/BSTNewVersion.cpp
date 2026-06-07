#include<bits/stdc++.h>
using namespace std;
struct Node{
int value;
Node *left;
Node *right;
};
Node *newNode(int k ){
 Node *newNode=(Node*)malloc(sizeof(Node));
 newNode->value=k;
 newNode->left=NULL;
 newNode->right=NULL;

 return newNode;
}
Node *Insert_BST(Node *root,int key){

 if(root==NULL){
    return root=newNode(key);
 }
 Node *temp=root;
 while(1){
    if(temp->value<=key){
        if(temp->right!=NULL)temp->right;
        else{
            temp->right=newNode(key);
            break;
        }
    }
    else{
        if(temp->left!=NULL)temp->left;
         else{
            temp->left=newNode(key);
            break;
         }
    }
 }
return root;
}
 void preorder(Node *root){
if(root==NULL)return;
else{
    cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}
}
int main(){
Node *root=NULL;
int t;
cin>>t;
while(t--){
    int data;
cin>>data;
int co=0;
if(co==0){
    root=Insert_BST(root,data);
    co++;
}
else{
    Insert_BST(root,data);
}

}

preorder(root);

return 0;
}
