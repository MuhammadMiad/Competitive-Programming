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
int  CheckedBalance(Node *root,bool &valid){
    if(!root)return 0;

    int L=CheckedBalance(root->left,valid);
    int R=CheckedBalance(root->right,valid);
    if(abs(L-R)>1)valid=0;
    return 1+max(L,R);
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
    bool valid=1;
    CheckedBalance(root,valid);
    if(valid)cout<<"It is Balance Tree."<<endl;
    else cout<<"It is not Balance Tree."<<endl;
    return 0;
}






