#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;cin>>t;while(t--){
     int n;cin>>n;
     int arr[n+1];

     priority_queue<pair<int,pair<int,int>>>p;
     p.push({n,{-1,n}});
     int i=1;
     while(!p.empty() and i<=n){
        int ff=-(p.top().second.first);
        int v=p.top().first;
        int ss=p.top().second.second;
        p.pop();
        int si=ss-ff+1;
        if(si%2){
          int index=(ss+ff)/2;
          arr[index]=i;
          if(index-1>0){
            int s=(index-1)-ff+1;
            p.push({s,{-ff,index-1}});
          }
          if(index+1<=n){
            int s=ss-(index+1)+1;
            p.push({s,{-(index+1),ss}});
         }

        }
        else{
         int index=(ss+ff-1)/2;
         arr[index]=i;
         if(index-1>0){
            int s=(index-1)-ff+1;
            p.push({s,{-ff,index-1}});
          }
         if(index+1<=n){
            int s=ss-(index+1)+1;
            p.push({s,{-(index+1),ss}});
         }
        }
      // cout<<v<<" "<<ff<<" "<<ss<<endl;
       i++;
     }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  }

return 0;
}
