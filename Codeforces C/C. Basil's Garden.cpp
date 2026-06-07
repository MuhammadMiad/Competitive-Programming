#include<bits/stdc++.h>
using  namespace std;
int main(){
int t;
cin>>t;
vector<int>v,v1;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)v.push_back(arr[i]);
    sort(v.begin(),v.end());
    if(v[v.size()-1]==arr[0]) v1.push_back(arr[0]);
    else if(v[v.size()-1]==arr[n-1]) v1.push_back(arr[n-1]+(v.size()-1));

    v.clear();
}

for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}


return 0;
}
