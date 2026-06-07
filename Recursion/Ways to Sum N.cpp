#include<bits/stdc++.h>
using namespace std;
int countWays(int arr[],int n,int sum){
if(sum==0)return 1;
if(sum<0)return 0;
long long ans=0;
for(int i=0;i<n;i++){
    ans+=countWays(arr,n,sum-arr[i]);
}
return ans;
}
int main(){
    int arr[]={1,5,6};
    int n=3;
    int sum=7;
 /**
1+1+1+1+1+1+1
1+1+5
1+5+1
5+1+1
1+6
6+1
**/
  cout<<countWays(arr,n,sum)<<endl;

return 0;
}

