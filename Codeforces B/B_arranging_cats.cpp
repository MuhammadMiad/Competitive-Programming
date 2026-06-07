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
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
int co=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0&&arr1[i]==1){
            co++;
        }
    }
    v.push_back(co);
    arr[n]={0};
    arr1[n]={0};
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}


return 0;
}
