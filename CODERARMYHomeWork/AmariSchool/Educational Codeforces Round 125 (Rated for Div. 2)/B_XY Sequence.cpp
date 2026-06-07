#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,b,x,y;
        cin>>n>>b>>x>>y;
        ll sum=0,total=0;
        while(n--){
          if(sum+x<=b){
            sum+=x;
          }
          else sum-=y;

          total+=sum;
        }

        cout<<total<<endl;
    }

return 0;
}
