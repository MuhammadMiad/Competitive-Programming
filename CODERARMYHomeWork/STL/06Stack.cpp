#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>st;
st.push(20);
st.push(10);
st.push(30);
st.push(11);

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
cout<<endl;

return 0;
}
