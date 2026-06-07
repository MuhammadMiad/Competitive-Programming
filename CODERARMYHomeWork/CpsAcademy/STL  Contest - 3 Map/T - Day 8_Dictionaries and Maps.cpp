#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--){
        string str;int val;
        cin>>str>>val;
        mp[str]=val;
    }
    while(1){
        string name;
        if(cin>>name){
        if(mp[name]){
            cout<<name<<"="<<mp[name]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
        }
        else break;
    }


return 0;
}
