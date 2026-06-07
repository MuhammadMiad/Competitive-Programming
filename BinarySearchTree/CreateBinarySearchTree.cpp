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
Node *CreateBST(Node *root,int target){
   if(!root){
    Node *temp=new Node(target);
    return temp;
   }
   if(target<root->data){
    root->left=CreateBST(root->left,target);
   }
   else{
    root->right=CreateBST(root->right,target);
   }
  return root;
}
void inorder(Node *root){
 if(!root)return;

 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);

}
bool Search(Node *root,int target){
if(!root)return 0;
if(root->data==target)return 1;
if(target<root->data)return Search(root->left,target);
else return Search(root->right,target);

}
int main(){
int arr[]={5,10,3,7,8,23,12,32,7,4};
int n=10;
Node *root=NULL;
for(int i=0;i<n;i++){
    root=CreateBST(root,arr[i]);
}
cout<<"Inorder Traverse:"<<endl;
inorder(root);
cout<<endl;
bool ans=Search(root,22);
if(ans)cout<<"This value is present"<<endl;
else cout<<"This value is not present"<<endl;
return 0;
}
