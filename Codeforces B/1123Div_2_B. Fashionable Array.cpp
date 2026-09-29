#include<bits/stdc++.h>
using namespace std;
void solve(){
    ///Step-01
      int n;cin>>n;
      vector<int>val(101,0);
      for(int i=0;i<n;i++){
        int x;cin>>x;
        val[x]++;
      }
    ///Step-02
    vector<pair<int,int>>arr;
    for(int i=100;i>0;i--){
        if(val[i]!=0){
             arr.push_back({i,val[i]});
        }
    }
   ///Step-03
    int flag=1;
    while(flag){
            int mxval,amount=0,idx;
            int check=0;
            ///Step-04
          for(int i=0;i<arr.size();i++){
                if(arr[i].second!=0){
                    mxval=arr[i].first;
                    amount=arr[i].second;
                    idx=i;
                    check=1;
                    break;
                }
          }
          ///Step-06
          if(check==0)break;
          ///Step-05

          for(int i=idx;i<arr.size();i++){
                 int cnt=0;
               while( arr[i].second  and cnt<amount){
                      cout<<arr[i].first<<" ";
                      arr[i].second--;
                      cnt++;
               }
          }

    }
    cout<<endl;
}
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int t;cin>>t;while(t--)solve();
return 0;
}

