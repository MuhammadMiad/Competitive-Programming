#include<bits/stdc++.h>
using namespace std;
int main(){
       int n,q;cin>>n>>q;
         vector<vector<pair<int,int>>>group(q+1);
         for(int i=0;i<q;i++){
            int l,r,x;cin>>l>>r>>x;
            group[x].push_back({l,r});

         }


         vector<int>d(n+2,0);

       for(int  x=1;x<=q;x++){
           auto &v=group[x];
           if(v.empty())continue;
           sort(begin(v),end(v));
          int f=v[0].first;
          int s=v[0].second;
          for(int i=1;i<v.size();i++){
               if(v[i].first<=s){
                s=max(s,v[i].second);
               }
               else{
                    d[f]++;
                    d[s+1]--;
                    f=v[i].first;s=v[i].second;
               }
          }
          d[f]++;d[s+1]--;
       }

       int cnt=0;
       for(int i=1;i<=n;i++){
          cnt+=d[i];
          cout<<cnt<<" ";
       }
       cout<<endl;

return 0;
}
