#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int co=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            co++;
        }
    }
    if(co>0){
        v.push_back(1);
    }
    else{
        v.push_back(0);
    }
}

for(int i=0;i<v.size();i++){
    if(v[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;
}
