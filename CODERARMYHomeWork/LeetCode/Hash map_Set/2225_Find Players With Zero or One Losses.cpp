#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<vector<int>>matches;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    matches.push_back({x,y});
}
 map<int,int>mp;
      for(int i=0;i<matches.size();i++){
        int lost_match=matches[i][1];
        mp[lost_match]++;
      }
      vector<int>zeromatch,onematch;
      for(int i=0;i<matches.size();i++){
        int winner=matches[i][0];
        int lost=matches[i][1];
        if(mp.find(winner)==mp.end()){
            zeromatch.push_back(winner);
            mp[winner]=2;
        }
        if(mp[lost]==1)onematch.push_back(lost);
      }

      sort(begin(zeromatch),end(zeromatch));
      sort(begin(onematch),end(onematch));
      cout<<"Lost Zero match:";
      for(auto it:zeromatch)cout<<it<<" ";
      cout<<endl;
      cout<<"Lost one match:";
      for(auto it:onematch)cout<<it<<" ";
      cout<<endl;

return 0;
}
