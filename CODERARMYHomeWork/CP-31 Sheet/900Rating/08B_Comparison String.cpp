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

        int cnt=0,mx=0;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]==str[i+1])cnt++;
            else cnt=0;
            mx=max(mx,cnt);
        }

        cout<<mx+2<<endl;


    }


return 0;
}
