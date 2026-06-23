#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
        ll   b;cin>>b;
        int ans=-1;
        for(int i=1;i<18;i++){

            ll temp=1;
            for(int j=1;j<=i;j++){
                temp*=i;
            }
            if(temp==b){
                ans=i;
                break;
            }
            if(temp>b)break;
        }

        cout<<ans<<endl;


return 0;
}
