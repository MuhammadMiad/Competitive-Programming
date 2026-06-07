#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
map<int ,int>mp;
vector<int>v;
while(t--){
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        mp[k]++;
            }
int m=0;
    for(auto  it:mp){
            if(it.second>=3){
                    if(it.first>m)
                   m=it.first;
            }
//   cout<<it.first<< " "<<it.second<<endl;
    }
    if(m>0){
        v.push_back(m);
    }
    else  v.push_back(-1);


    mp.clear();
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
