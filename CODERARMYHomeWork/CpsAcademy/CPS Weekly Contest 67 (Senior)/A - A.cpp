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
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>ans;
    if(k==1){
        cout<<"NO"<<endl;
        return;
    }
    if(k>=2){
        if(x!=1){
            cout<<"YES\n";
            cout<<n<<endl;
            while(n--){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            int val=n/2;
            while(val--)
                cout<<2<<" ";
            cout<<endl;
        }
        else if(k>2){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            int val=(n/2)-1;
            while(val--)
                cout<<2<<" ";

            cout<<3<<endl;
        }
        else cout<<"NO"<<endl;

    }

}
int main(){
    Faster;
    int t;cin>>t;
    while(t--){
      solve();
    }
   return 0;
}

