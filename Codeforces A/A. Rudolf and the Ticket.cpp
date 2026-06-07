#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n],arr1[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int co=0;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i]+arr1[j]<=k){
            co++;
        }

    }
    }
    v.push_back(co);
    }
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
