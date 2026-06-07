#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int c0=0,c1=0,zero=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0')zero=1;
            else{
                c1++;
                c0+=zero;
                zero=0;
            }
        }
        if(zero)c0++;
        if(c1>c0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

return 0;
}
