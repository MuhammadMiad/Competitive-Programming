#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>k;
    v.push_back(k);
}
sort(v.begin(),v.end());
int sum=0;
for(int i=0;i<v.size();i++){
    sum+=v[v.size()-1]-v[i];
}
cout<<sum<<endl;
return 0;
}
