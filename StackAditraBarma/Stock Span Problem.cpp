#include<bits/stdc++.h>
using namespace std;
void StockSpan(int arr[],int n){
 stack<pair<int,int>>st;
 vector<int>v;
 for(int i=0;i<n;i++){
    if(st.size()==0)v.push_back(-1);
    else if(st.size()>0 and st.top().first>arr[i])v.push_back(st.top().second);
    else if(st.size()>0 and st.top().first<=arr[i]){
        while(st.size()>0 and st.top().first<=arr[i]){
            st.pop();
        }
        if(st.size()==0)v.push_back(-1);
        else v.push_back(st.top().second);
    }
    st.push({arr[i],i});
 }

 for(int i=0;i<v.size();i++){
   v[i]=i-v[i];
   cout<<v[i]<< " ";
 }


}
int main(){
int arr[]={10, 4, 5, 90, 120, 80};
int n=sizeof(arr)/sizeof(arr[0]);
StockSpan(arr,n);


return 0;
}
