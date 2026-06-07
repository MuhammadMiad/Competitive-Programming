#include<bits/stdc++.h>
using namespace std;
bool check(string &str ,int index,int k){
    for(int i=index-1;i>=0 and k-1;i--){
        if(str[i]=='1')return false;
        k--;
    }
    return true;
}
int main(){
  int t;
  cin>>t;while(t--){
   int n,k;
   cin>>n>>k;
   string str;
   cin>>str;
   int cnt=0,ans=0;
   for(int i=0;i<n;i++){
    if(str[i]=='1' and check(str,i,k)){
        ans++;
    }
   }
   cout<<ans<<endl;

  }


return 0;
}
