#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={8,6,4,7,4,9,10,8,12};
 int n=sizeof(arr)/sizeof(arr[0]);
 ///Method-1(T.C:O(n2),S,C:O(1)
// vector<int>ans(n,-1);
// for(int i=0;i<n;i++){
//    for(int j=i+1;j<n;j++){
//        if(arr[i]<arr[j]){
//            ans[i]=arr[j];
//            break;
//        }
//    }
// }
// for(auto it:ans)cout<<it<<" ";

///Method-2(T.C:O(n),S.C:O(n)
vector<int>ans(n,-1);
stack<int>st;

for(int i=0;i<n;i++){
    while(!st.empty()&&arr[st.top()]<arr[i]){
        ans[st.top()]=arr[i];
        st.pop();
    }
    st.push(i);
}
for(auto it:ans)cout<<it<<" ";

return 0;
}
