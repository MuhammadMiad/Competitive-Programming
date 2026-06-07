#include<bits/stdc++.h>
using namespace std;
int main(){
    int co=0;
    string n;
    cin>>n;

    for(int i=0;i<n.size();i++){
        if(n[i]=='4'||n[i]=='7'){
            co++;
        }

    }
    if(co==4||co==7){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

return 0;
}
