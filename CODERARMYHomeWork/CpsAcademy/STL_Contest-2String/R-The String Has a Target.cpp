#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str,ss="";
        cin>>str;
        char mn='z';
        for(int i=0;i<n;i++){
            mn=min(mn,str[i]);
        }
        for(int i=n-1;i>0;i--){
            if(str[i]==mn){
              ss+=str[i];
              str.erase(begin(str)+i);
              break;
            }
        }
        ss+=str;
        cout<<ss<<endl;

    }


return 0;
}
