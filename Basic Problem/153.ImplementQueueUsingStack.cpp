#include<bits/stdc++.h>
using namespace std;
class Queue{
  public:
      stack<int>st1;
      stack<int>st2;

      Queue(){}

      bool isEmpty(){
      return st1.empty()&&st2.empty();
      }
      void push(int x){
       st1.push(x);
      }
      int pop(){
       if(isEmpty()){
        return 0;
       }
       else if(!st2.empty()){
        int element=st2.top();
         st2.pop();
         return element;
       }
       else{
          while(!st1.empty()){
             st2.push(st1.top());
             st1.pop();
          }
          int element=st2.top();
           st2.pop();;
           return element;
       }
      }
      int peek(){
      if(isEmpty())return 0;
      else if(!st2.empty()){
        return st2.top();
      }
      else{
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();

        }
        return st2.top();
      }

      }
};
int main(){
    Queue q;
   // q.push(5);
//    q.push(3);
    q.push(2);
    cout<<q.pop()<<endl;
    cout<<q.peek()<<endl;

return 0;
}
