#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
class Queue
{
    Node *front,*rear;
public:
    Queue()
    {
        front=rear=NULL;
    }

    //queue is empty or not
    bool isEmpty()
    {
        return front==NULL;
    }

    void push(int x)
    {
        if(isEmpty())
        {
            cout<<"Pushed "<<x<<" into the Queue."<<endl;
            rear=front=new Node(x);
            return;
        }
        else
        {
            rear->next=new Node(x);
            cout<<"Pushed "<<x<<" into the Queue."<<endl;
            rear=rear->next;

        }
    }
    void pop(){
      if(isEmpty()){
        cout<<"Queue is underflow."<<endl;
        return;
      }
      else{
        cout<<"Popped "<<front->data<<" into the Queue."<<endl;
        Node *temp=front;
        front=front->next;
        delete temp;
      }
    }
    int start(){
     if(isEmpty()){
        cout<<"Queue is Empty."<<endl;
        return -1;
     }
     else return front->data;
    }

};
int main()
{
 Queue q;
 q.push(5);
 q.push(10);
 q.push(15);
 q.pop();
 q.pop();
 q.pop();
 q.pop();
 cout<<q.start()<<endl;
    return 0;
}
