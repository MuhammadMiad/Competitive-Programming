#include<bits/stdc++.h>
using namespace std;
class Dequeue{
 int rear,front,size;
 int *arr;
 public:
     Dequeue(int n){
      size=n;
      arr=new int[n];
      front=rear=-1;
     }

     bool IsEmpty(){
       return front==-1;
     }

     bool IsFull(){
      return (rear+1)%size==front;
     }
     void Push_front(int value){
       if(IsEmpty()){
        front=rear=0;
        cout<<"Pushed "<<value<<" into front."<<endl;
        arr[0]=value;
        return;
       }
       else if(IsFull()){
        cout<<"Dequeue is Overflow."<<endl;
        return;
       }
       else{
         front=(front-1+size)%size;
         arr[front]=value;
         cout<<"Pushed "<<value<<" into front."<<endl;
         return;
       }

     }

     void Push_back(int value){
       if(IsEmpty()){
        front=rear=0;
        cout<<"Pushed "<<value<<" into rear."<<endl;
        arr[0]=value;
        return;
       }
       else if(IsFull()){
        cout<<"Dequeue is Overflow."<<endl;
        return;
       }
       else{
         rear=(rear+1)%size;
         arr[rear]=value;
         cout<<"Pushed "<<value<<" into rear."<<endl;
         return;
       }

     }

     void Pop_front(){
      if(IsEmpty()){
        cout<<"Dequeue is Underflow."<<endl;
        return;
      }
      else{
        if(front==rear){
         cout<<"Popped "<<arr[front]<<" from front."<<endl;
         front=rear=-1;
        }
        else{
        cout<<"Popped "<<arr[front]<<" from front."<<endl;
        front=(front+1)%size;
        return;
        }

      }

     }

      void Pop_back(){
      if(IsEmpty()){
        cout<<"Dequeue is Underflow."<<endl;
        return;
      }
      else{
        if(front==rear){
         cout<<"Popped "<<arr[front]<<" from back."<<endl;
         front=rear=-1;
        }
        else{
        cout<<"Popped "<<arr[front]<<" from back."<<endl;
        rear=(rear-1+size)%size;
        return;
        }

      }

     }
     int Start(){
     if(IsEmpty()){
        return -1;
     }
     else return arr[front];
     }
     int End(){
     if(IsEmpty())return -1;
     else return arr[rear];
     }

};
int main(){
Dequeue dq(5);
dq.Push_front(10);
dq.Push_front(20);
dq.Push_front(40);
dq.Push_front(50);
//dq.Pop_front();
//dq.Pop_back();
dq.Push_back(30);
cout<<dq.Start()<<endl;
cout<<dq.End()<<endl;

return 0;
}
