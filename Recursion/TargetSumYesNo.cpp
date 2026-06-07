#include<bits/stdc++.h>
using namespace std;
bool TargetSum(int arr[],int index,int n,int target){
 if(target==0)return 1;
 if(index==n||target<0)return 0;
 return TargetSum(arr,index+1,n,target)||TargetSum(arr,index+1,n,target-arr[index]);

}
int main(){
int arr[]={2,6,3};
int n=3;
int target=7;
bool ans=TargetSum(arr,0,n,target);
if(ans)cout<<"It's target Sum."<<endl;
else cout<<"It's not target Sum."<<endl;

return 0;
}
