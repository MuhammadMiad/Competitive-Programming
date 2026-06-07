#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
   int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int co=0;
    int mx=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            co++;
        }
        else if(arr[i]==1){
            co=0;
        }
        if(co>mx){
            mx=co;
        }
    }
    v.push_back(mx);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
