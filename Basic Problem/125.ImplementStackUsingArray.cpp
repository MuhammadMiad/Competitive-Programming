#include<bits/stdc++.h>
using namespace std;
class Stack{
  int *arr;
  int size;
  int top;
  public:
  ///constructor
  bool flag;
  Stack(int s){
  size=s;
  top=-1;
  arr=new int[s];
  flag=1;
  }
  ///push
  void push(int value){
   if(top==size-1){
    cout<<"Stack is Overflow."<<endl;
    return;
   }
   else{
    top++;
    arr[top]=value;
    cout<<"Pushed "<<value<<" into the stack"<<endl;
    flag=0;
   }
  }
  ///pop
  void pop(){
   if(top==-1){
    cout<<"Stack is Underflow."<<endl;
    return;
   }
   else{
    cout<<"Popped "<<arr[top]<<" from at stack."<<endl;
    top--;
    if(top==-1)flag=1;
   }
  }
  ///peek
  int peek(){
   if(top==-1){
    cout<<"Stack is Empty."<<endl;
    return -1;
   }
   else{
    return arr[top];
   }

  }
  ///isEmpty
  bool isEmpty(){
    return top==-1;
  }
  ///isSize
  int isSize(){
   return top+1;
  }

};
int main(){
    Stack S(5);

    S.push(-1);
    S.push(20);
    S.push(30);
    S.pop();
    S.pop();
    int value=S.peek();
    if(S.flag==0)cout<<value<<endl;
    //cout<<S.isEmpty()<<endl;
   // cout<<S.isSize()<<endl;

return 0;
}
