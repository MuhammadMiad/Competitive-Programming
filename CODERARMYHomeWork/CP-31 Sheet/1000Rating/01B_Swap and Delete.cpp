#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int one=count(begin(str),end(str),'1');
        int zero=str.size()-one;
        int i;
        for(i=0;i<str.size();i++){
            if(str[i]=='1')
                if(zero>0)zero--;
                else break;
            else
                if(one>0)one--;
                else break;
        }
        cout<<str.size()-i<<endl;
    }


return 0;
}
