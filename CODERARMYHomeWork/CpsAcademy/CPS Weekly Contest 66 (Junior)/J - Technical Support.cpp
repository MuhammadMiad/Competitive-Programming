#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
         int n;cin>>n;
         string str;
         cin>>str;
         int ans=0;
         for(int i=0;i<n;i++){
            if(str[i]=='Q')ans++;
            else ans--;
            if(ans<0)ans=0;
         }

         if(ans==0)cout<<"Yes"<<endl;
         else cout<<"No"<<endl;


    }




return 0;
}
