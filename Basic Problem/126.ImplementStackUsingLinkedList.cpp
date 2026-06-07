#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
      int data;
      Node *next;

      Node(int value){
        data=value;
        next=NULL;
      }
};
class Stack{
    Node *top;
    int size;
public:
    Stack(){
     top=NULL;
     size=0;
    }

    ///push
    void push(int value){
       Node *temp=new Node(value);
       if(temp==NULL){
        cout<<"Stack is Overflow."<<endl;
        return;
       }
       else{
        temp->next=top;
        top=temp;
        size++;
        cout<<"Pushed "<<value<< " into the stack."<<endl;
       }

    }
    ///pop
    void pop(){
    if(top==NULL){
        cout<<"Stack is Underflow."<<endl;
        return;
    }
    else{
        Node *temp=top;
        cout<<"Popped "<<top->data<<" from the stack."<<endl;
        top=top->next;
        delete temp;
        size--;
    }
    }
    ///peek
    int peek(){
     if(top==NULL){
        cout<<"Stack is Empty."<<endl;
        return -1;
     }
     else{
        return top->data;
     }
    }

    //isEmpty
    bool isEmpty(){
    return top==NULL;
    }
    ///isSize
    int isSize(){
     return size;
    }
};
int main(){
    Stack S;
    S.push(10);
    S.push(20);
    S.pop();
    cout<<S.peek()<<endl;
   // cout<<S.isSize()<<endl;
    //cout<<S.isEmpty()<<endl;


return 0;
}
