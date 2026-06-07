#include<bits/stdc++.h>
using namespace std;
int MaxSumSubarray(int arr[],int n,int k){
int i=0;
int j=k-1;
int l=0;
int mx=INT_MIN;
int sum=0;
set<int>st;
while(j<n){
  sum+=arr[i];
  st.insert(arr[i]);
  if(i==j){
    l++;
    j++;
    i=l;
    if(st.size()!=k)sum=0;
    mx=max(mx,sum);//cout<<mx<<endl;
    sum=0;
    st.clear();
  }
 else  i++;

}
return mx;
}
int main(){
int arr[]={1,5,4,2,9,9,9};
int n=sizeof(arr)/sizeof(arr[0]);
int k=3;
int maximum=MaxSumSubarray(arr,n,k);
cout<<"Maximum Sum of Sub array: "<<maximum<<endl;
return 0;
}
