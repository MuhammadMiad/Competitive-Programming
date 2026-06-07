#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){

        int hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;

        ///Formula  x/y=(x+y-1)/y;
        int flag=0;
        for(int i=0;i<k;i++){
          ll x=hc+(a*i);
          ll y=dc+(k-i)*w;
          ll sum1=(hm+y-1)/y;
          ll sum2=(x+dm-1)/dm;
          if(sum1<=sum2){
            flag=1;
            break;
          }
        }

        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


return 0;
}
