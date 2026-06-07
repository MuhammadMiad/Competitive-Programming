#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string str;
        cin>>str;
        int cnt=0;
        for(int i=m;i<n;i+=m){
            if(str[i]=='0')cnt++;
            for(int j=0;j<k;j++){
                str[j]='1';
            }
        }
        cout<<cnt<<endl;
    }

return 0;
}

