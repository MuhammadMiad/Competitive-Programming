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
   vector<string>str(n);
   unordered_map<string,int>mp;
   for(int i=0;i<n;i++){
      cin>>str[i];
      mp[str[i]]++;

   }

   string ans="";
   for(int i=0;i<n;i++){
      string ss=str[i];
      int flag=0;
      for(int j=0;j<ss.size();j++){
        if(mp.count(ss.substr(0,j+1)) and mp.count(ss.substr(j+1))){
            flag=1;break;
        }
      }
      if(flag)ans+='1';
      else ans+='0';
   }
   cout<<ans<<endl;

}
int main(){
    Faster;
    int t;cin>>t;
    while(t--){
      solve();
    }
   return 0;
}

