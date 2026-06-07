#include<bits/stdc++.h>
using namespace std;
#define  mod 1000007
int gethash(string s){
int ans=0;
int prime=3;
int power=1;
for(int i=0;i<s.size();i++){
    ans=(ans+(s[i]*power))%mod;
    power*=prime;
}
return ans;

}
int main(){
int t;
cin>>t;
while(t--){
    string s;
cin>>s;
cout<<gethash(s)<<endl;


}

return 0;
}
