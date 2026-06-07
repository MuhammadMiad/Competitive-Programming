#include<bits/stdc++.h>
using namespace std;
int TargetSum(int arr[],int index,int n,int target){
if(target==0)return 1;
if(target<0 || index==n)return 0;

return TargetSum(arr,index+1,n,target)+TargetSum(arr,index,n,target-arr[index]);
}
int main(){
    int arr[]={1,5,6};
    int n=3;
    int target=7;
  cout<<TargetSum(arr,0,n,target)<<endl;

return 0;
}
