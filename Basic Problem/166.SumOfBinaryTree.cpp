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
///Method-1
void TotalSum(Node *root,int &sum){
    if(root==NULL)
        return;
    sum+=root->data;
    TotalSum(root->left,sum);
    TotalSum(root->right,sum);
   }

///Method-2
//int TotalSum(Node* root){
//  if(root==NULL)return 0;
//  return root->data+TotalSum(root->left)+TotalSum(root->right);
//}
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
    int sum=0;
    TotalSum(root,sum);
//int sum= TotalSum(root);
    cout<<sum<<endl;
    return 0;
}

