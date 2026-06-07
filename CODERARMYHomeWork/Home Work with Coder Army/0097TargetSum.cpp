#include<bits/stdc++.h>
using namespace std;
int TargetSum(vector<int>&arr,int index,int n,int target){
   if(target==0)return 1;
   if(target<0 || index==n)return 0;
   return TargetSum(arr,index+1,n,target)||TargetSum(arr,index+1,n,target-arr[index]);

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    cout<<TargetSum(arr,0,n,target)<<endl;

return 0;
}
