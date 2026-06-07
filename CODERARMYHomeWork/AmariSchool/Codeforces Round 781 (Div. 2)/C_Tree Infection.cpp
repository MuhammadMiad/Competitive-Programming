#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        map<int,int>mp;
        int x;
        for(int i=0;i<n-1;i++){
            cin>>x;
            mp[x]++;
        }
        for(auto it:mp){
            arr.push_back(it.second);
        }
        arr.push_back(1);
        sort(begin(arr),end(arr));
        int mx=arr[arr.size()-1];
        if(mx>=arr.size())cout<<mx<<endl;
        else cout<<mx+1<<endl;

    }


return 0;
}
