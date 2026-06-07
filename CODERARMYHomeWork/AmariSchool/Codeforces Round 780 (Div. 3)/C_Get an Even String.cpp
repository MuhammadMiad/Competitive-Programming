#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int ans=str.size();
        map<char,bool>mp;
        for(int i=0;i<str.size();i++){
            if(mp[str[i]]!=true){
                mp[str[i]]=true;
            }
            else if(mp[str[i]]==true){
                ans-=2;
                mp.clear();
            }
        }
        cout<<ans<<endl;
    }
return 0;
}
