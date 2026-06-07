#include<bits/stdc++.h>
using namespace std;
void SubsetSum(vector<int>&arr,int n,int index,int sum,vector<int>&ans){
   if(index>=n){
    ans.push_back(sum);
    return;
   }
   SubsetSum(arr,n,index+1,sum,ans);
   sum+=arr[index];
   SubsetSum(arr,n,index+1,sum,ans);
}
int main(){
 int n;
 cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++)cin>>arr[i];
 vector<int>ans;
 int sum=0,index=0;
 SubsetSum(arr,n,index,sum,ans);
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
 }
 cout<<endl;

return 0;
}
