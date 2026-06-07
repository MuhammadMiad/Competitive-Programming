#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    Stack(){}
    stack<int>st1;
    stack<int>st2;
    void push(int value){
     if(st1.empty()){
        st1.push(value);
        st2.push(value);
     }
     else{
        st1.push(value);
        st2.push(min(value,st2.top()));
     }
    }
    int pop(){
     if(st1.empty()){
        return -1;
     }
     else{
        int element=st1.top();
        st1.pop();
        st2.pop();
        return element;
     }

    }
    int getMin(){
     if(st2.empty())return -1;
     else return st2.top();
    }

};
int main(){
int arr[]={6,3,1,8,4};
int n=sizeof(arr)/sizeof(arr[0]);
Stack st;
for(int i=0;i<n;i++){
    st.push(arr[i]);
}
cout<<st.pop()<<endl;
cout<<st.pop()<<endl;
cout<<st.getMin()<<endl;

return 0;
}
