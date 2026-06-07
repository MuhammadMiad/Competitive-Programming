#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int mx=arr[0],a;
        for(int i=0;i<n-1;i++){
            a=arr[i];
            mx=max(mx,arr[i+1]-a);

        }

        int m=x-arr[n-1];
        m=m*2;
        mx=max(mx,m);
        cout<<mx<<endl;
    }


return 0;
}
