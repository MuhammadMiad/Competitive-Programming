#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(b!=d and d!=f and b!=f)cout<<0<<endl;
    else {

        if(b==d and d>0 and f<d){
            int x=abs(a-c);
            cout<<x<<endl;
        }
        else if(b==f and f>0 and d<f){
            int x=abs(a-e);
            cout<<x<<endl;
        }
        else if(f==d and d>0 and b<d){
            int x=abs(e-c);
            cout<<x<<endl;
        }
        else cout<<0<<endl;

    }
  }


return 0;
}
