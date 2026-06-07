#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int r=0,g=0,b=0;
        int flag=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='r')r=1;
            if(str[i]=='g')g=1;
            if(str[i]=='b')b=1;
            if(str[i]=='B' and !b){
                flag=1;
                break;
            }
             if(str[i]=='G' and !g){
                flag=1;
                break;
            }
             if(str[i]=='R' and !r){
                flag=1;
                break;
            }
        }
        if(!flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

return 0;
}
