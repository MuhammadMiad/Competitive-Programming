#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={100,80,60,70,60,75,85};
 int n=sizeof(arr)/sizeof(arr[0]);

///Method-1(T.C:O(n),S.C:O(n)
vector<int>ans(n,-1);
stack<int>st;

for(int i=n-1;i>=0;i--){
    while(!st.empty()&&arr[st.top()]<arr[i]){
        ans[st.top()]=st.top()-i;
        st.pop();
    }
    st.push(i);
}
while(!st.empty()){
    ans[st.top()]=st.top()+1;
    st.pop();
}
for(auto it:ans)cout<<it<<" ";

return 0;
}

