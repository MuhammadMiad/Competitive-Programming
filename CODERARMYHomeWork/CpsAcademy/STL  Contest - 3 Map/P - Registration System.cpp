#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main(){
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){
    string str;
    cin>>str;

    if(mp[str]){
     cout<<str<<mp[str]<<endl;
    }
    else {
        cout<<"OK"<<endl;
    }
    mp[str]++;


 }

}
