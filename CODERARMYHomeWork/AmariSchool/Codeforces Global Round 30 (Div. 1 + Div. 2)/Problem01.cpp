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
 int n;cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
    int first,second;
    int flag=0;
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
           int x=arr[j]%arr[i];
          if(x%2==0)
          {
              first=arr[i];
              second=arr[j];
              flag=1;
              break;
          }
        }
        if(flag)break;
    }
    if(flag)
        cout<<first<<" "<<second<<endl;
    else
        cout<<-1<<endl;

}
int main(){
    Faster;
    int t;cin>>t;
    while(t--){
      solve();
    }
   return 0;
}
