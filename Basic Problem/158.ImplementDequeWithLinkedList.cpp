#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *prev,*next;
    Node(int x){
     data=x;
     prev=next=NULL;
    }
};
class Deque{
 Node *front,*rear;
 public:
     Deque(){
     front=rear=NULL;
     }
    void Push_front(int value){
     if(front==NULL){
        front=rear=new Node(value);
        cout<<"Pushed front "<<value<<" into the Deque."<<endl;
        return;
     }
     else{
        Node *temp=new Node(value);
        cout<<"Pushed front "<<value<<" into the Deque."<<endl;
        temp->next=front;
        front->prev=temp;
        front=temp;
     }
    }

     void Push_back(int value){
     if(front==NULL){
        front=rear=new Node(value);
        cout<<"Pushed back "<<value<<" into the Dequeue."<<endl;
        return;
     }
     else{
        Node *temp=new Node(value);
        cout<<"Pushed back "<<value<<" into the Dequeue."<<endl;
        rear->next=temp;
        temp->prev=rear;
        rear=temp;
     }
    }

    void Pop_front(){
      if(front==NULL){
        cout<<"Dequeue is Underflow."<<endl;
        return;
      }
      else{
        Node *temp=front;
        front=front->next;
        if(front)front->prev=NULL;
        else rear=NULL;
        cout<<"Popped front "<<temp->data<<" From Deque."<<endl;
        delete temp;
      }
    }

     void  Pop_back(){
      if(front==NULL){
        cout<<"Deque is Underflow."<<endl;
        return;
      }
      else{
        Node *temp=rear;
        rear=rear->prev;
        if(rear)rear->next=NULL;
        else front=NULL;
        cout<<"Popped back "<<temp->data<<" From Deque."<<endl;
        delete temp;
      }
    }

    void Start(){
     if(front==NULL){
        cout<<"Dequeue is Empty."<<endl;
        return;
     }
     else {
        cout<<"Front Element: "<<front->data<<endl;
        return;
     }
    }
    void End(){
     if(front==NULL){
        cout<<"Dequeue is Empty."<<endl;
        return;
     }
     else {
        cout<<"Back Element: "<<rear->data<<endl;
        return;
     }
    }


};
int main(){
    Deque dq;
    dq.Push_front(40);
    dq.Push_back(60);
    dq.Push_front(30);
    dq.Push_back(80);
    dq.Start();
    dq.End();
    dq.Pop_front();
    dq.Pop_front();
    dq.Pop_back();
    dq.Pop_back();
    dq.Pop_back();
    dq.Start();
    dq.End();

return 0;
}
