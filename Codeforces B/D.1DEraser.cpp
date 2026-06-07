#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;

    for(int i=0;i<s.size();i++){
     if(s[i]=='B'){
            ans++;
        i+=k-1;
     }
    }

 v.push_back(ans);

}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
