#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int n;
        cin>>n;
     int ans=1;
     while(ans<=n){
        ans*=2;
     }
     ans/=2;
     ans--;
     v.push_back(ans);
    }

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
