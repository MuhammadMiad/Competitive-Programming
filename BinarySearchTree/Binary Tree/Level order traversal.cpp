#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left,*right;

    Node (int value)
    {
        data=value;
        left=right=NULL;
    }
};
void Level(Node *root)
{
    queue<Node*>q;
    //vector<int>ans;
    q.push(root);

    while(!q.empty())
    {
        int s=q.size();
        vector<int>v;
        for(int i=0; i<s; i++)
        {
            Node *temp=q.front();
            q.pop();
            v.push_back(temp->data);
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        //sort(v.begin(),v.end());
        //ans.push_back(v[v.size()-1]);
        for(auto it:v)cout<<it<<" ";
        cout<<endl;
    }

}
int main()
{
    int x;
    cout<<"Enter the root element:";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root=new Node(x);
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" : ";
        cin>>first;
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<" : ";
        cin>>second;
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
        }


    }
    Level(root);
    return 0;
}

