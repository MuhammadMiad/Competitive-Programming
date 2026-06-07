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

        if(n==1 and arr[0]>1){
            cout<<"NO"<<endl;
            continue;
        }
        else if(n==1 and arr[0]==1){
            cout<<"YES"<<endl;
            continue;
        }
        sort(begin(arr),end(arr));
        if(arr[n-1]-arr[n-2]>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

return 0;
}
