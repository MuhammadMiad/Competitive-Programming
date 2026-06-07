#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    vector<char>v;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b&&b<c){
            v.push_back('a');
        }
        else if(a<b&&b>c){
            v.push_back('b');
        }
        else
            v.push_back('c');
    }
    for(int i=0;i<v.size();i++){
        if(v[i]=='a')
            cout<< "STAIR"<<endl;
        else if(v[i]=='b')
            cout<<"PEAK"<<endl;
        else
            cout<<"NONE"<<endl;
    }


return 0;
}
