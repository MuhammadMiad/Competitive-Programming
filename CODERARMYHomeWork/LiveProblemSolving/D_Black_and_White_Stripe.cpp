#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n,k;cin>>n>>k;
   string  str;
   cin>>str;
   int i=0,j=0;
   int w=0,mn=INT_MAX;
   while(j<n){
       if(str[j]=='W')w++;
       if(j-i+1>k){
        if(str[i]=='W')w--;
        i++;
       }
       if(j-i+1==k){
        mn=min(mn,w);
       }
       j++;
   }

 cout<<mn<<endl;

}
int main(){
     int t;cin>>t;while(t--)
     solve();

    return 0;
}