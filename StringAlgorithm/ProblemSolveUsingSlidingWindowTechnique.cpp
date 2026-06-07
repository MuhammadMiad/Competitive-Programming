#include<bits/stdc++.h>
using namespace std;
int  Slideing_Windrow(string s){
if(s.size()<3) return 0;
map<char,int>mp;
int ans=0;
mp[s[0]]++;
mp[s[1]]++;
mp[s[2]]++;
if(mp.size()==3)ans++;
for(int i=3,j=0;i<s.size();i++,j++){
    mp[s[i]]++;
    mp[s[j]]--;
    if(mp[s[j]]==0) mp.erase(s[j]);
    if(mp.size()==3)ans++;
}
return ans;

//for(auto it:mp){
//    cout<<it.first<< "  "<<it.second<<endl;
//}

}
int main(){
string s;
cin>>s;
int x=Slideing_Windrow(s);
cout<<x<<endl;



return 0;
}
