#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==m){
                cnt=1;
                break;
            }

        }
        if(cnt)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

return 0;
}
