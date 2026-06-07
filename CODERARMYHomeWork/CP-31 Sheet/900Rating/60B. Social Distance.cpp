#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(begin(arr),end(arr));
        if(n>m){
            cout<<"NO"<<endl;
            continue;
        }
        ll sum=0;
        for(int i=0;i<n;i++){
          sum+=max(arr[i%n],arr[(i+1)%n]);
        }
        sum+=n;
        if(sum<=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


return 0;
}
