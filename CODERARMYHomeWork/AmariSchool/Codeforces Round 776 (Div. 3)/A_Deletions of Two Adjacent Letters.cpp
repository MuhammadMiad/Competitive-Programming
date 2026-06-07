#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       string str;
       cin>>str;
       char c;
       cin>>c;

       if(str.size()==1 and str[0]==c){
        cout<<"YES"<<endl;
        continue;
       }
       int flag=0;
       for(int i=0;i<str.size();i++){
        if(str[i]==c and i%2==0){
            flag=1;
        }
       }
       if(flag)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

return 0;
}
