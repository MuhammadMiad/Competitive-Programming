#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
   int ans=0;
    while(num){
        int rem=num%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            cout<<"0"<<endl;
            return 0;
        }
        ans=10*ans+rem;
        num/=10;
    }
    cout<<ans<<endl;

return 0;
}
