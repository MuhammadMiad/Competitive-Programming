#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
           int n;cin>>n;
           string str;
           cin>>str;
            int i,j;
            for( i=0;i<n;i++){
                if(str[i]=='A')break;
            }

             for(j=n-1;j>=0;j--){
                if(str[j]=='B')break;
            }
            if(i>j)cout<<0<<endl;
            else{
                   cout<<j-i<<endl;
            }

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

