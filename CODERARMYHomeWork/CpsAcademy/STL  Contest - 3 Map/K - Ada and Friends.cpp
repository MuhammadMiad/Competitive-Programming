#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   int n,k;
   cin>>n>>k;
   map<string ,ll>mp;
   string str;ll x;
   for(int i=0;i<n;i++){
     cin>>str>>x;
     mp[str]+=x;
   }
   ll sum=0;
   if(mp.size()<=k){
    for(auto &p:mp){
        sum+=p.second;
    }
   }
   else{
       vector<ll>ans;
     for(auto &p:mp){
       ans.push_back(p.second);
    }
   sort(rbegin(ans),rend(ans));
   for(int i=0;i<k;i++)sum+=ans[i];

   }
   cout<<sum<<endl;


return 0;
}
