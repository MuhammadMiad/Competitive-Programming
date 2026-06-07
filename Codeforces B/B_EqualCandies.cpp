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
     int m=min_element(arr,arr+n)-arr;
     int Min=arr[m];
     int ans=0;
    for(int i=0;i<n;i++){
     ans+=abs(Min-arr[i]);
    }
    v.push_back(ans);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
