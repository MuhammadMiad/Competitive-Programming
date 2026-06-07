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
void solve(int ind){
   ll n,k;cin>>n>>k;
   vector<ll>arr(n);
   unordered_map<ll,vector<ll>>mp;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]].push_back(i);
   }
   ll sum=0;
   for(int i=0;i<n-1;i++){
    sum+=abs(arr[i]-arr[i+1]);
   }
   cout<<"Case "<<ind<<":"<<endl;
   while(k--){
      ll a,b;
      cin>>a>>b;
      if(a==b){
        cout<<sum<<endl;
        continue;
      }
      for (auto &p : mp[a]) {
         if (p - 1 >= 0) sum -= abs(arr[p] - arr[p - 1]);
         if (p + 1 < n) sum -= abs(arr[p] - arr[p + 1]);

          arr[p] = b;
          mp[b].push_back(p);


          if (p - 1 >= 0) sum += abs(arr[p] - arr[p - 1]);
          if (p + 1 < n) sum += abs(arr[p] - arr[p + 1]);
     }
      mp.erase(a);
      cout<<sum<<endl;
   }
}
int main(){
    Faster;
    int ind=1;
    int t;cin>>t;
     for(int i=1;i<=t;i++){

      solve(i);
    }
   return 0;
}

