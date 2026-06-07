#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
 string ss=to_string(n);
 for(int i=0;i<ss.size();i++){
    if(ss[i]!='0' and n%(ss[i]-'0')!=0)return false;
 }
 return true;
}
int main(){
    int t;cin>>t;while(t--){
     long long n;cin>>n;
      while(!check(n))n++;
      cout<<n<<endl;

    }
return 0;
}
