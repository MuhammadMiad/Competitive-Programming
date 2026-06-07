#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string>v;
    while(t--){
        string s;
        char s1;
        cin>>s;
        cin>>s1;
        int co=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s1&&(i%2==0)){
                co=1;
                break;
            }
        }
        if(co==1){
            v.push_back("YES");
        }
        else v.push_back("NO");
    }

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
