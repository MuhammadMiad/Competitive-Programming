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
  int n,x,y;
  cin>>n>>x>>y;
  string str;
  cin>>str;
  int ss=100;
  int a=0,b=0;
  int flag=0;
  while(ss--){
    for(int i=0;i<n;i++){
        if(str[i]=='N')b++;
        else if(str[i]=='E')a++;
        else if(str[i]=='S')b--;
        else a--;

        if(x==a and y==b){
            flag=1;
            break;
        }
    }
    if(flag)break;
  }

  if(flag)cout<<"YES"<<endl;
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
