#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    if(n==1)cout<<arr[0]<<endl;
    else{
        for(int i=0;i<n;i++){
        if(arr[i]==-1)arr[i]=1000000000;
    }
    int mx=0,sum=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            sum+=arr[i];
        }
        else{
            if(arr[i-1]<=arr[i] and i>=1)sum+=arr[i];
            mx=max(mx,sum);
            sum=0;
        }
    }
    if(arr[n-2]<=arr[n-1])sum+=arr[n-1];
    mx=max(mx,sum);
    cout<<mx<<endl;
    }

    }

return 0;
}
