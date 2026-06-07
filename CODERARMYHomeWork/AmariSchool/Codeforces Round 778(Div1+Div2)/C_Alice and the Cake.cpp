#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x,sum=0,cnt=0;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
            mp[x]++;
        }
      if(n==1){
        cout<<"YES"<<endl;
        continue;
      }
       queue<ll>q;
       q.push(sum);
       while(!q.empty() and cnt<n){
            long double value=q.front();
            q.pop();
            long double a,b;
            a=floor(value/2);
            b=ceil(value/2);
            if(mp[a])mp[a]--;
            else if(!mp[a])q.push(a);
            if(mp[b])mp[b]--;
            else if(!mp[b])q.push(b);
            cnt++;


       }
       if(q.empty())cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

return 0;
}
