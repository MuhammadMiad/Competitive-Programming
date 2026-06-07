#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n,m;
    cin>>n>>m;
    int ans=n*m;
    if(ans%2==0){
        int sol=ans/2;
        v.push_back(sol);
    }
    else{
        int sol=ans/2;
        v.push_back(sol+1);
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
