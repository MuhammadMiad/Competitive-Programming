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
bool parent(Node *root,int a,int b)
{
    if(!root)return 0;
    if(root->left&&root->right)
    {
        if(root->left->data==a&&root->right->data==b)return 1;
        if(root->left->data==b&&root->right->data==a)return 1;
    }
    return parent(root->left,a,b)||parent(root->right,a,b);
}

bool isCousins(Node* root, int x, int y)
{
    if(!root->left&&!root->right)return 0;
    queue<Node*>q;
    q.push(root);
    int l1=-1,l2=-1;
    int level=0;
    while(!q.empty())
    {
        int size=q.size();
        while(size--)
        {
            Node *temp=q.front();
            q.pop();
            if(temp->data==x)
                l1=level;
            if(temp->data==y)
                l2=level;
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        level++;
        if(l1!=l2||x==y)return 0;
        if(l1!=-1 &&l2!=-1)break;
    }
    return !parent(root,x,y);

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
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" :";
        cin>>first;
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<" :";
        cin>>second;
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
    int a,b;
    cin>>a>>b;
    bool valid=isCousins(root,a,b);
    if(valid)cout<<"They are Cousin."<<endl;
    else cout<<"They are not Cousin."<<endl;
    return 0;
}






