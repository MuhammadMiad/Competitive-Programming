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
int check(string &t, int index,int n,char f, char s){
     for(int i=index+1;i<n;i++){
         if(t[i]==f)return 1;
         else if(t[i]==s)return 2;
     }
   return 0;

}
void solve(){
   int n,k;cin>>n>>k;
   string s,t;cin>>s>>t;
   vector<string>ans;
   if(s[0]!=t[0]){
    cout<<-1<<endl;
    return ;
   }
   if(s==t){
    cout<<0<<endl;return;
   }
   string str;
   str+=s[0];
   int cnt=0;
   while(k--){
      cnt++;
     for(int i=1;i<n;i++){
        if(s[i]==t[i])str+=t[i];
        else if(s[i-1]==t[i])str+=t[i];
        else{
            if(check(t,i,n,s[i-1],s[i])<2)str+=s[i-1];
            else if(check(t,i,n,s[i-1],s[i])==2)str+=s[i];
        }
     }
     ans.push_back(str);
     if(str==t)break;
     s=str;
     str.clear();
     str+=s[0];
   }
   if(ans[ans.size()-1]==t){
    cout<<ans.size()<<endl;
    for(auto &p:ans)cout<<p<<endl;
   }
   else cout<<-1<<endl;
}
int main(){
    Faster;
    int t;cin>>t;
    while(t--){
      solve();
    }
   return 0;
}

