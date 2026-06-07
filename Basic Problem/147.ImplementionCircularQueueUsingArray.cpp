
#include<bits/stdc++.h>
using namespace std;
class Queue{
 int *arr;
 int front,rear,size;
 public:
     Queue(int n){
       arr=new int[n];
       front=rear=-1;
       size=n;
     }

     ///Queue is Empty or not
     bool isEmpty(){
         return front==-1;
     }
     ///Queue is Full or not
     bool isFull(){
      return  (rear+1)%size==front;
     }

     ///Insert into queue
     void push(int val){
       if(isEmpty()){
        cout<<"Pushed "<<val<<" into the queue."<<endl;
        front=rear=0;
        arr[0]=val;
       }
       else if(isFull()){
        cout<<"Queue is OverFlow."<<endl;
        return;
       }
       else{
      cout<<"Pushed "<<val<<" into the queue."<<endl;
        rear=(rear+1)%size;
        arr[rear]=val;
       }
     }
     ///popped into queue.
     void pop(){
      if(isEmpty()){
        cout<<"Queue is Empty."<<endl;
        return;
      }
      else{
            if(front==rear){
            cout<<"Popped "<<arr[front]<<" into the queue."<<endl;
            front=rear=-1;
            }
            else{
            cout<<"Popped "<<arr[front]<<" into the queue."<<endl;
            front=(front+1)%size;
            }

      }
     }
     int start(){
      if(isEmpty()){
        cout<<"Queue is Empty."<<endl;
        return -1;
      }
      else return arr[front];
     }

};
int main(){
 Queue q(3);
 q.push(5);q.pop();
 q.push(8);
 q.push(9);
 q.push(10);

 q.pop();
 //q.pop();


return 0;
}
