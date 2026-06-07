#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={2,3,4,2,6,5,4,5,3};
int n=sizeof(arr)/sizeof(arr[0]);

///Method-1  T.C:O(n):S.C:O(n)
//vector<int>NSR(n);
//vector<int>NSL(n);
//stack<int>st;
//for(int i=0;i<n;i++){
//    while(!st.empty()&&arr[st.top()]>arr[i]){
//        NSR[st.top()]=i;
//        st.pop();
//    }
//    st.push(i);
//}
//while(!st.empty()){
//    NSR[st.top()]=n;
//    st.pop();
//}
//
//for(int i=n-1;i>=0;i--){
//    while(!st.empty()&&arr[st.top()]>arr[i]){
//        NSL[st.top()]=i;
//        st.pop();
//    }
//    st.push(i);
//}
//while(!st.empty()){
//    NSL[st.top()]=-1;
//    st.pop();
//}
//int ans=0;
//for(int i=0;i<n;i++){
//    ans=max(ans,arr[i]*(NSR[i]-NSL[i]-1));
//}

///Method-2 T.C:O(n):S.C:O(1)
stack<int>st;
int ans=0;
for(int i=0;i<n;i++){
    while(!st.empty()&&arr[st.top()]>arr[i]){
        int index=st.top();
        st.pop();
        if(!st.empty()){
            ans=max(ans,arr[index]*(i-st.top()-1));
        }
        else{
            ans=max(ans,arr[index]*i);
        }
    }
    st.push(i);
}
while(!st.empty()){
    int index=st.top();
    st.pop();
    if(!st.empty()){
        ans=max(ans,arr[index]*(n-st.top()-1));
    }
    else{
        ans=max(ans,arr[index]*n);
    }
}
cout<<"LargestRectangle: "<<ans<<endl;
return 0;
}
