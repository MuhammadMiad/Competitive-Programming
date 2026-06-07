#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
     int n;cin>>n;
     vector<pair<int,int>>arr;
     for(int i=0;i<n;i++){
         int a,b;cin>>a>>b;
         arr.push_back({a,b});

     }
     sort(begin(arr),end(arr));
     priority_queue<int,vector<int>,greater<int>>p;
     for(int i=0;i<n;i++){
         p.push(arr[i].second);
         if(arr[i].first<p.size()){
              p.pop();
         }
     }
     int sum=0;
     while(!p.empty()){
         sum+=p.top();
         p.pop();
     }
     cout<<sum<<endl;
  }


return 0;
}
