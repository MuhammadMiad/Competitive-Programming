#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char x,y;
        x=s[0];
        y=s[s.size()-1];
        int cnt=0;
        map<char,int>mp;
        for(int i=1;i<s.size()-1;i++){
                mp[s[i]]++;
            if(s[i]==x||s[i]==y){
                cnt=1;
                break;
            }

        }
         int cnt2=0;
            for(auto it:mp){
                if(it.second>1)cnt2=1;
            }
            if(cnt||cnt2)cout<<"Yes"<<endl;
            else cout<<"NO"<<endl;



    }

return 0;
}
