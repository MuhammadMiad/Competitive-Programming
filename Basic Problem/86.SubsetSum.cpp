#include<bits/stdc++.h>
using namespace std;
void SubsetSum(int arr[],int index,int n,int sum,vector<int>&ans){
if(index==n){
    ans.push_back(sum);
    return;
}
///Not included
SubsetSum(arr,index+1,n,sum,ans);
///included
SubsetSum(arr,index+1,n,sum+arr[index],ans);

}
int main(){
int arr[]={3, 34, 4, 12, 5, 2};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>ans;
int sum=0,index=0;
SubsetSum(arr,index,n,sum,ans);
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}


return 0;
}
