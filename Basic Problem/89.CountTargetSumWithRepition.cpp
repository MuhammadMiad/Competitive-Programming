#include<bits/stdc++.h>
using namespace std;
int CountWithRepite(int arr[],int index,int n,int target){
 if(target==0)return 1;
 if(index==n||target<0)return 0;

 return CountWithRepite(arr,index+1,n,target)+CountWithRepite(arr,index,n,target-arr[index]);
}
/**
2+2+2=6
3+3+=6
2+4=6
**/
int main(){
int arr[]={2,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
int target=6;
int ans=CountWithRepite(arr,0,n,target);
cout<<ans<<endl;

return 0;
}
