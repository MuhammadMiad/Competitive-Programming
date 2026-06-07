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
    int Min=arr[min_element(arr,arr+n)-arr];
    for(int i=0;i<n;i++){
        if(arr[i]==Min){
            arr[i]+=1;
            break;
        }
    }
    int ans=1;
    for(int i=0;i<n;i++){
        ans*=arr[i];
    }
    v.push_back(ans);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}


return 0;
}
