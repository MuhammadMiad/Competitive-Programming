#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string str;
    cin>>str;
    int flag=0,i;
    for(i=0;i<n-1;i++){
        if(str[i]>str[i+1]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        cout<<i+1<<" "<<i+2<<endl;
    }
    else cout<<"NO"<<endl;


return 0;
}
