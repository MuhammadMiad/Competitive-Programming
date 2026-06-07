#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }

        int one=0,more=0;
        for(auto it:mp){
            if(it.second==1)one++;
            else more++;
        }
        int ans=0;
        if(one%2){
            ans=one/2+1;
        }
        else ans=one/2;
        ans+=ans;
        ans+=more;

        cout<<ans<<endl;

    }


return 0;
}
