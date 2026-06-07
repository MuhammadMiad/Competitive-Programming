#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;cin>>t;while(t--){
         int n,k;cin>>n>>k;
         if(n<k)cout<<"NO"<<endl;
         else if(n%2==k%2){
            int x=(k-1);
            cout<<"YES"<<endl;
            for(int i=1;i<=x;i++){
                cout<<1<<" ";
            }
            cout<<n-x<<endl;
         }
         else if(n%2==1 and k%2==0)cout<<"NO"<<endl;
         else if(n%2==0 and k>n/2)cout<<"NO"<<endl;
         else{
            int x=k-1;
            cout<<"YES"<<endl;
            for(int i=1;i<=x;i++){
                cout<<2<<" ";
            }
            cout<<n-x*2<<endl;
         }



     }

return 0;
}
