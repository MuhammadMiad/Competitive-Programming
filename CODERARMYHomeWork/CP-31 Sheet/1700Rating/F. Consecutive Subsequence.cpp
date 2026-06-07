#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    unordered_map<int,int>mp;
    int mx_value=0,mx_len=0;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i]-1)!=mp.end()){
            mp[arr[i]]=mp[arr[i]-1]+1;
        }
        else mp[arr[i]]=1;

        if(mx_len<mp[arr[i]]){
            mx_len=mp[arr[i]];
            mx_value=arr[i];
        }
    }

    int start_value=mx_value-mx_len+1;
    cout<<mx_len<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==start_value){
             cout<<i+1<<" ";
             start_value++;
        }

    }

return 0;
}
