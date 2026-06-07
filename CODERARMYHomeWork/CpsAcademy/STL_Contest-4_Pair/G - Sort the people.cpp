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
 bool comparator(pair<string,pair<string,int>>a,pair<string,pair<string,int>>b){
  if(a.second.first!=b.second.first)return a.second.first<b.second.first;
  else if(a.first!=b.first)return a.first<b.first;
  else return a.second.second>b.second.second;
 }
int main(){
    Faster;
    int t;cin>>t;
    vector<pair<string,pair<string,int>>>arr;
    while(t--){
            string s1,s2;int val;
            cin>>s1>>s2>>val;
            arr.push_back({s1,{s2,val}});
    }
    sort(begin(arr),end(arr),comparator);

    for(auto &p:arr){
        cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    }
   return 0;
}

