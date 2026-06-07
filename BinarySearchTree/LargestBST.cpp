#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left,*right;

    Node (int value){
    data=value;
    left=right=NULL;
    }
};

class Box{
        public:
        bool BST;
        int size;
        int Min,Max;

        Box(int data){
            BST=1;
            size=1;
            Min=data;
            Max=data;
        }
    };

Box *find(Node *root,int &Totalsize){
        //leaf Node exits
        if(!root->left&&!root->right){
            Totalsize=max(Totalsize,1);
            return new Box(root->data);
        }
        //Only right side Node
        else if(!root->left&&root->right){
            Box* head=find(root->right,Totalsize);
            //yes
            if(head->BST&&head->Min>root->data){
                head->size++;
                head->Min=root->data;
                head->Max=root->data;

                Totalsize=max(Totalsize,head->size);
                return head;
            }
            //No
            else{
                head->BST=0;
                return head;
            }
        }
        //Only left size exixs
        else if(!root->right&&root->left){
            Box *head=find(root->left,Totalsize);
            //Yes
            if(head->BST&&head->Max<root->data){
                head->size++;
                head->Min=root->data;
                head->Max=root->data;

                Totalsize=max(Totalsize,head->size);
                return head;
            }
            //No
            else{
                head->BST=0;
                return head;
            }
        }
        else{

            Box *lefthead=find(root->left,Totalsize);
            Box *righthead=find(root->right,Totalsize);
            //Yes
            if(lefthead->BST&&righthead->BST&&lefthead->Max<root->data&&righthead->Min>root->data){
                Box *head=new Box(root->data);

                head->size+=lefthead->size+righthead->size;
                head->Min=lefthead->Min;
                head->Max=righthead->Max;

                Totalsize=max(Totalsize,head->size);
                return head;
            }
            //NO
            else{
                lefthead->BST=0;
                return lefthead;
            }
        }


    }

int main(){
int x;
cout<<"Enter the root element:";
cin>>x;
int first,second;
queue<Node*>q;
Node *root=new Node(x);
q.push(root);
while(!q.empty()){
     Node *temp=q.front();
     q.pop();
     cout<<"Enter the left child of "<<temp->data<<" : ";
     cin>>first;
     if(first!=-1){
       temp->left=new Node(first);
       q.push(temp->left);
     }
    cout<<"Enter the right child of "<<temp->data<<" : ";
    cin>>second;
    if(second!=-1){
        temp->right=new Node(second);
        q.push(temp->right);
    }
}
 int Totalsize=0;
 find(root,Totalsize);
cout<<Totalsize<<endl;
return 0;
}
