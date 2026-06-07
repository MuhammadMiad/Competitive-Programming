
/**
ei problem ta ami solve korte partam, zodi j ke ami index vabte parte partam.
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        if(k>1){
            cout<<"YES"<<endl;
            continue;
        }
        int ss=arr[j-1];
        sort(begin(arr),end(arr));
        if(arr[n-1]==ss)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

return 0;
}
