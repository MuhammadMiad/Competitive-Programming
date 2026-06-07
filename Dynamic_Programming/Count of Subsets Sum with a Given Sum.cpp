#include<bits/stdc++.h>
using namespace std;
int CountSubsetSum(int arr[],int n,int sum){
int store[n+1][sum+1];
store[0][0]=1;
for(int i=1;i<=sum;i++)store[0][i]=0;
for(int i=1;i<=n;i++){
    for(int j=0;j<=sum;j++){
        if(arr[i-1]>j) store[i][j]=store[i-1][j];
        else store[i][j]=store[i-1][j]+store[i-1][j-arr[i-1]];
    }
}
return store[n][sum];
}
int main(){
int n,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<CountSubsetSum(arr,n,x);

return 0;
}
