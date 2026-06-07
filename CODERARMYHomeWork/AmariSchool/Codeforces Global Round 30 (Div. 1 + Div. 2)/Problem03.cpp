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
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll k;cin>>k;
    ll mn=min(arr[0],arr[1]);
    ll mx=max(arr[0],arr[1]);

    ll mn1=min(arr[n-1],arr[n-2]);
    ll mx1=max(arr[n-1],arr[n-2]);

    if((mn<=k and k<=mx)||(mn1<=k and k<=mx1))cout<<"YES"<<endl;
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
