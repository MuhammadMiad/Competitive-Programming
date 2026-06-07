#include<bits/stdc++.h>
using namespace std;
bool SubsetSum(int arr[],int n,int sum){
int subset[n+1][sum+1];
for(int i=0;i<=n;i++)subset[i][0]=true;
for(int j=1;j<=sum;j++)subset[0][j]=false;

for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
        if(j<arr[i-1]){
            subset[i][j]=subset[i-1][j];
        }
        else if(j>=arr[i-1]){
            subset[i][j]=subset[i-1][j] ||subset[i-1][j-arr[i-1]];
        }
    }
}
return subset[n][sum];


}
int main(){
int n,sum;
cin>>n>>sum;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

bool ans=SubsetSum(arr,n,sum);
if(ans==true)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
