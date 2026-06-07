#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={8,6,4,7,4,9,10,12,8};
 int n=sizeof(arr)/sizeof(arr[0]);

///Method-1(T.C:O(n),S.C:O(n)
vector<int>ans(n,-1);
stack<int>st;
for(int i=0;i<2*n;i++){
        int index=i%n;
    while(!st.empty()&&arr[st.top()]<arr[index]){
        ans[st.top()]=arr[index];
        st.pop();
    }
   if(i<n)
    st.push(i);
}
for(auto it:ans)cout<<it<<" ";

return 0;
}
