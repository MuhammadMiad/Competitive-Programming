#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    int mxindex,mx=0;
    for(int i=0;i<n;i++){
        if(mx<arr[i]){
            mx=arr[i];
            mxindex=i;
        }
    }
    mx=0;
    int sum=0;
    for(int i=0;i<mxindex;i++){
        if(mx<arr[i])mx=arr[i];
        else sum+=mx-arr[i];
    }
    mx=0;
    for(int i=n-1;i>mxindex;i--){
        if(mx<arr[i])mx=arr[i];
        else sum+=mx-arr[i];
    }

    cout<<sum<<endl;


return 0;
}
