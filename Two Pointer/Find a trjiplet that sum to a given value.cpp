#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,int x){
      int a=0;
for(int i=0;i<n;i++){
    int l=i+1;
    int r=n-1;

    while(l<r){
        int sum=arr[l]+arr[r]+arr[i];
        if(sum==x){
            cout<<arr[l]<<" "<<arr[r]<<" "<<arr[i]<<endl;
            a=1;
        }
        if(sum<x) l++;
        else r--;
    }

}
 if(a==0) cout<<"Triplet is not found"<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int x;
    cin>>x;
    solve(arr,n,x);


return 0;
}
