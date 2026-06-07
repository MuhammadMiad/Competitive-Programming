#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={2,3,5,-4,6,-2,-8,9};
int n=sizeof(arr)/sizeof(arr[0]);
stack<int>st;
for(int i=0;i<n;i++){
    if(st.empty()){
        st.push(arr[i]);
    }
    else if(arr[i]>=0){
        if(st.top()>=0){
            st.push(arr[i]);
        }
        else st.pop();
    }
    else{
        if(st.top()<0){
            st.push(arr[i]);
        }
        else st.pop();
    }
}
vector<int>ans(st.size());
while(!st.empty()){
    ans[st.size()-1]=st.top();
    st.pop();
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

return 0;
}
