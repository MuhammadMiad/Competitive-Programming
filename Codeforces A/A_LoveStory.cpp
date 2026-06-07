#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,co=0;
    cin>>n;
    string s,s1="codeforces";
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>s;
        co=0;
        for(int j=0;j<s.size();j++){
            if(s[j]!=s1[j]){
                co++;
            }
        }
        v.push_back(co);

    }
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
 }

return 0;
}
