#include<bits/stdc++.h>
using namespace  std;
int main(){
int n,ans;
cin >>n;
if(n%2==0){
    ans=n/2;
    if(ans%2==1){
         cout<<ans+1<< " "<<ans-1<<endl;
    }else{
     cout<<ans<< " "<<ans<<endl;
    }

}
else{
    ans=n/2;
    if(ans%2==1){
    cout<<ans+1<< " "<<ans<<endl;


    } else{
        cout<<ans<< " "<<ans+1<<endl;
    }
    }

return 0;
}
