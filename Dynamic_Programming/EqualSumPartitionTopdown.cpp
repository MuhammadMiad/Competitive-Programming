#include<bits/stdc++.h>
using namespace std;
bool EqualSumPartition(int arr[],int n,int sum){
 bool par[n+1][sum+1];
  for(int i=0;i<=n;i++)par[i][0]=true;
  for(int i=1;i<=sum;i++)par[0][i]=false;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
        if(j<arr[i-1]){
            par[i][j]=par[i-1][j];
        }
        else par[i][j]=par[i-1][j]||par[i-1][j-arr[i-1]];
    }
  }
  return par[n][sum];
}
int main(){
    int n;
cin>>n;
int arr[n];
int sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
if(sum%2==1)cout<<"False"<<endl;
else{
    bool ans=EqualSumPartition(arr,n,sum/2);
    if(ans==true)cout<<"True"<<endl;
    else cout<<"False"<<endl;
}
return 0;
}
