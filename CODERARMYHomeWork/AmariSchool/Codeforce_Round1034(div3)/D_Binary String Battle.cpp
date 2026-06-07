#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int one=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1')one++;
        }

        if(one<=k)cout<<"Alice"<<endl;
        else if(n<2*k)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;

    }


return 0;
}
