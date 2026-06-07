#include<bits/stdc++.h>
using namespace std;
void InsertAtBottom(stack<int>&s,int x){
  stack<int>st;
  while(!s.empty()){
     st.push(s.top());
     s.pop();
  }
  s.push(x);
  while(!st.empty()){
    s.push(st.top());
    st.pop();
  }

}
int main(){
stack<int>s;
s.push(9);
s.push(5);
s.push(2);
s.push(7);
s.push(3);
int x=4;
InsertAtBottom(s,x);
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
return 0;
}
