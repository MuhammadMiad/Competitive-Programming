#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
    int n; cin >> n;

    vector<int> arr(n);
    vector<int>odd,even;

    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    for(auto &x:arr){
        if(x%2)odd.push_back(x);
        else even.push_back(x);
    }

    if(odd.size()==n || even.size()==n){
        for(auto &p:arr)cout<<p<<" ";
        cout<<endl;
        continue;
    }

    sort(arr.begin(),arr.end());
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
return 0;
}
