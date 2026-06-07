#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<char>v;
    while(t--){
        string s;
        cin>>s;
        int co=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                co++;
            }
            else{
                c++;

            }
        }
        if(co>c){
            v.push_back('A');
        }
        else{
            v.push_back('B');
        }
    }
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
