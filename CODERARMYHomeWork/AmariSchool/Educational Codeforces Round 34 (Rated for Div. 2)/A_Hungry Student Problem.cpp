#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%7==0){
            cout<<"YES"<<endl;
            continue;
        }
        if(n%3==0){
            cout<<"YES"<<endl;
            continue;
        }
        int seven=n;
        int three=n;
        int flag=0;
        while(seven>0){
            seven-=7;
            if(seven%3==0 and seven>-1){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            continue;
        }
        while(three>0){
            three-=3;
            if(three%7==0 and three>-1){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            continue;
        }
        else cout<<"NO"<<endl;
    }


return 0;
}
