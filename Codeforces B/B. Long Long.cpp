#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n){
    int l=0;
    int r=n-1;
    int c=0;
    while(l<=r){
           if(arr[l]<0&&l==r)c++;
         else if(arr[l]<=0&&arr[l+1]>0)c++;
        l++;
    }
    for(int i=0;i<n;i++){
           if(arr[i]<0) arr[i]=arr[i]*(-1);
    }

    int sum=0;
    for(int i=0;i<n;i++)sum+=arr[i];
    cout<<sum<<" "<<c<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    solve(arr,n);
    }



return 0;
}
