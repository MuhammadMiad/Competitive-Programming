#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long a,b,ans=0;
    cin>>a>>b;
        long long s=a*(a+1)/2;
        if(s<b)cout<<-1<<endl;
        else{
         for(int i=a;i>=1;i--){
            ans+=i;
            if(ans>b)ans-=i;
            else if(i<=b){
                cout<<i<<" ";
            }
            if(ans==b){
               i=0;
            }
          }
          cout<<endl;
        }
    }

return 0;
}
