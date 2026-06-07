#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),temp(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
        }
         int size=n;
        for(auto it:mp){
           temp[it.second]=size;
           size--;
        }
        for(auto it:temp)cout<<it<<" ";
        cout<<endl;
    }


return 0;
}
