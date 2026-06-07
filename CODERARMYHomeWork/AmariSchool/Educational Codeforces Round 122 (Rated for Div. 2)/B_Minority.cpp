#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int one=0,zero=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1')one++;
            else zero++;
        }
        if(one==zero and one+zero==2)cout<<0<<endl;
        else if(one==zero)cout<<one-1<<endl;
        else if(one<zero)cout<<one<<endl;
        else cout<<zero<<endl;
    }


return 0;
}
