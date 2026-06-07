#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int m=0,e=0,o=0,w=0,index=0;
            while(str[index]=='m'||str[index]=='M' and index<n){
                m=1;
                index++;
            }
            while(str[index]=='e'||str[index]=='E' and index<n){
                e=1;
                index++;
            }
            while(str[index]=='o'||str[index]=='O' and index<n){
                o=1;
                index++;
            }
            while(str[index]=='w'||str[index]=='W' and index<n){
                w=1;
                index++;
            }

        if(m==1 and e==1 and o==1 and w==1 and index==n){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }



return 0;
}
