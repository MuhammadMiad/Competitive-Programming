#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n,a,b;cin>>n>>a>>b;
    string str;cin>>str;
    int s1=0,s2=0;
    int mx=max(a,b);
    int flag=0;
      for(int i=0;i<1000;i++){
       if(str[i%n]=='N')s2++;
       else if(str[i%n]=='E')s1++;
       else if(str[i%n]=='S')s2--;
       else if(str[i%n]=='W')s1--;
       if(s1==a and s2==b){
        flag=1;
        break;
       }
    }

    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




 }

return 0;
}
