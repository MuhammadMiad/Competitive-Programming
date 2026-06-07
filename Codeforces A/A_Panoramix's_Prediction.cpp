#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
cin>>n>>m;
vector<int>v;
int co=0;
for(int i=0;i<15;i++){
  if(arr[i]==n){
        co++;
    if(arr[i]==n&&arr[i+1]==m){
        v.push_back(1);
    }
    else{
        v.push_back(0);
    }
  }
}
if(co==0){
    v.push_back(0);
}

for(int i=0;i<v.size();i++){
    if(v[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
return 0;
}
