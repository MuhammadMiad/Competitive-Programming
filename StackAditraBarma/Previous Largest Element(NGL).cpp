#include<bits/stdc++.h>
using namespace std;
void NGL(int arr[],int n){
 vector<int>v;
 stack<int>st;
 for(int i=0;i<n;i++){
    if(st.size()==0)v.push_back(-1);
    else if(st.size()>0 and st.top()>arr[i])v.push_back(st.top());
    else if(st.size()>0 and st.top()<=arr[i]){
        while(st.size()>0 and st.top()<=arr[i])st.pop();
        if(st.size()==0)v.push_back(-1);
        else v.push_back(st.top());
    }
    st.push(arr[i]);
 }
 for(auto it:v)cout<<it<<" ";

}
int main(){
int arr[]={4,5,2,25 };
int n=sizeof(arr)/sizeof(arr[0]);
NGL(arr,n);
return 0;
}
