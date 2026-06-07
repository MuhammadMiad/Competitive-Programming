#include<bits/stdc++.h>
using namespace std;
class Stack{
  public:
      queue<int>q1;
      queue<int>q2;

      Stack(){}

      bool isEmpty(){
      return q1.empty()&&q2.empty();
      }

      void push(int x){
        if(isEmpty())q1.push(x);
        else if(q1.empty()){
            q2.push(x);
        }
        else q1.push(x);
      }

      int pop(){
       if(isEmpty()){
        return 0;
       }
       else if(q2.empty()){
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
         int element=q1.front();
         q1.pop();
         return element;
       }
       else{
          while(q2.size()>1){
             q1.push(q2.front());
             q2.pop();
          }
          int element=q2.front();
           q2.pop();;
           return element;
       }
      }
      int Top(){
      if(isEmpty())return 0;
      else if(q2.empty()){
        return q1.back();
      }
      else  return q2.back();
      }
};
int main(){
    Stack st;
    st.push(5);
    st.push(3);
    st.push(2);
    cout<<st.pop()<<endl;
    cout<<st.Top()<<endl;

return 0;
}

