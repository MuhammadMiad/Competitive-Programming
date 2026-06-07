#include<bits/stdc++.h>
using  namespace std;
//double  solve(int arr[],int n,int k){
//    double sum=0;
//    double ans=0;
//for(int i=0;i<=n-k;i++){
//    for(int j=i;j<k+i;j++){
//        sum+=arr[j];                                  //TimeComplexityO(n^2)
//    }
//    if((sum/k)>ans){
//        ans=sum/k;
//    }
//    sum=0;
//}
//return ans;
//
//}

double  solve(int arr[],int n,int k){
    double sum=0;
    double ans=0;
for(int i=0;i<k;i++)sum+=arr[i];
ans=sum/k;
for(int i=k;i<n;i++){
    sum+=arr[i];
    sum-=arr[i-k];
    if(sum/k>ans)ans=sum/k;                       //TimeComplexityO(n) So, it's Best Option
}
return ans;

}
int main(){
int  n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
cout<<"Maximum Average Subarray :"<<solve(arr,n,k)<<endl;

return 0;
}
