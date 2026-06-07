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
    int n;char ch;
    cin>>n>>ch;
    string str;cin>>str;
    if(ch=='g'){
        cout<<0<<endl;
        return;
    }
    int index;
    for(int i=0;i<n;i++){
        if(str[i]=='g'){
            index=i+1;
            break;
        }
    }
    str+=str.substr(0,index);
    int cnt=0,cn=0;
    int mx=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==ch and cn==0){
                cnt++;
                cn=1;
        }
        else if(cn and str[i]!='g')cnt++;
        else{
           mx=max(mx,cnt);
           cnt=0;
           cn=0;
        }

    }
    cout<<mx<<endl;

}
int main(){
    Faster;
    int t;cin>>t;
    while(t--){
      solve();
    }
   return 0;
}
