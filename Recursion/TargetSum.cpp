#include<bits/stdc++.h>
using namespace std;
int  TargetSum(int arr[],int index,int n,int target){
    if(target==0)return 1;
    if(target<0||index==n)return 0;


    return TargetSum(arr,index+1,n,target)+TargetSum(arr,index+1,n,target-arr[index]);

}
int main(){
int arr[]={3,5,2,6};
int target=8;
int ans=TargetSum(arr,0,4,target);
cout<<ans<<endl;

return 0;
}
