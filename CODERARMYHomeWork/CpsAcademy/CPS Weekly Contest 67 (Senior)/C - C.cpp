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
     int n,a,b;
     cin>>n>>a>>b;
     set<int>st;
     for(int i=1;i<=n;i++){
        if(i!=a and i<=b)st.insert(i);
        if(st.size()==n/2)break;
     }
     //cout<<st.count(b)<<endl;
     if(!st.count(b)){
        auto it=st.end();
         it--;
        st.erase(it);
        st.insert(b);
     }
//      for(auto &p:st)cout<<p<<" ";
//      cout<<endl;

     if(st.size()<n/2){
        cout<<-1<<endl;
        return;
     }

     set<int>ans;
     for(int i=1;i<=n;i++){
        if(st.find(i)==st.end())ans.insert(i);
     }

     if(*ans.begin()!=a){
        cout<<-1<<endl;
        return;
     }
     for(auto &p:ans)cout<<p<<" ";
     for(auto &p:st)cout<<p<<" ";
     cout<<endl;

}
int main(){
    Faster;
    int t;cin>>t;
    while(t--){
      solve();
    }
   return 0;
}

