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
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i+=2)v.push_back(arr[i]);
        int mx=max(v.begin(),v.end());
        cout<<mx<<endl;
    }
    return 0;
}