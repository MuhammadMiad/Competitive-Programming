#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)cnt++;
        }
        if(cnt==n){
            cout<<0<<endl;
            continue;
        }
        int co=0,c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)c++;
            if(c==k){
                co++;
                i++;
                c=0;
            }
            else if(arr[i]==1) c=0;
        }
        cout<<co<<endl;
    }

return 0;
}
