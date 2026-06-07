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
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr1[i]){
            sum+=abs(max(arr[i],arr1[i])-min(arr[i],arr1[i]));
        }
    }
    v.push_back(sum);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<< endl;
}
return 0;
}
