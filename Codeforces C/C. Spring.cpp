#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
          ll a,b,c,d;
          cin>>a>>b>>c>>d;

          ll ansA=d/a*6-d/lcm(a,b)*3-d/lcm(a,c)*3+d/lcm(a,lcm(b,c))*2;
          ll ansB=d/b*6-d/lcm(a,b)*3-d/lcm(b,c)*3+d/lcm(a,lcm(b,c))*2;
          ll ansC=d/c*6-d/lcm(a,c)*3-d/lcm(b,c)*3+d/lcm(a,lcm(b,c))*2;


          cout<<ansA<<" "<<ansB<<" "<<ansC<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

