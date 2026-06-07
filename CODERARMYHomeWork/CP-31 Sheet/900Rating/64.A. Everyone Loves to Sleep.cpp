#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define late(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
 while(t--){
    int n,h,m;
    cin>>n>>h>>m;
    int T=h*60+m;
    int ans=24*60+1;
    late(i,n){
     int x,y;
     cin>>x>>y;
     int s=x*60+y;
     if(T<=s)ans=min(ans,s-T);
     else ans=min(ans,(s+24*60)-T);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
 }
return 0;
}
