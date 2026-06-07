                    /*************In the name of Allah, the Most Gracious, the Most Merciful***************
                    *                                        Poet :                                       *
                                                            Miad
                    *                                    (muhammadmiad)                                   *
                    |                               muhammadmiad25@gmail.com                               |
                    **************************************************************************************//*
                                            I have a clumsy apprentice called Einstein.
*/#include<bits/stdc++.h>
using namespace std;
///data_type_compressions :
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
///I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)

///..............................................Let's Start with main function, shan't we.?......................................
void solve(){
    ll n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;cin>>k;
    vector<int>ans;
    while(arr.size()!=1){
            int flag=0;
        for(int i=0;i<arr.size()-1;i++){
           int mn=min(arr[i],arr[i+1]);
           int mx=max(arr[i],arr[i+1]);

          if(mn<=k and k<=mx){
            arr[i+1]=k;
            flag=1;
          }
          else ans.push_back(arr[i]);
        }
        ans.push_back(arr[arr.size()-1]);
        arr.clear();
        for(int i=0;i<ans.size();i++)arr.push_back(ans[i]);
        ans.clear();
        if(!flag)break;

    }

    if(arr.size()==1 and arr[0]==k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main(){
    Faster;
    int t;cin>>t;
    while(t--){
      solve();
    }
   return 0;
}
