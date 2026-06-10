#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
         int b,p,f,h,c;
         cin>>b>>p>>f>>h>>c;

        if(h>c){
            if(b>=p*2){
                int x=((b-p*2)/2);
                 if(x>=f){
                    cout<<p*h+f*c<<endl;
                 }
                 else{
                     cout<<p*h+x*c<<endl;
                 }

            }
            else{
                int x=b/2;
                cout<<x*h<<endl;
            }
        }
        else{
             if(b>=f*2){
                int x=((b-f*2)/2);
                 if(x>=p){
                    cout<<f*c+p*h<<endl;
                 }
                 else{
                     cout<<f*c+x*h<<endl;
                 }

            }
            else{
                int x=b/2;
                cout<<x*c<<endl;
            }
        }

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}
