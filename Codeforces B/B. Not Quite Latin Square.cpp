#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
map<char,int>mp;
vector<char>v;
while(t--){
        char arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
      mp[arr[i][j]]++;
        }
    }


for(auto it:mp){
        if(it.second==2){
            v.push_back(it.first);
        }

}
mp.clear();

}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
