#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    queue<int>arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push(x);
    }
    unordered_map<int,int>mp;
    queue<int>ans;
    int j=0;
    int mx=0;
    while(j<n){
        int val=arr.front();
        arr.pop();
        if(mp[val]){
           while(mp[val]){
              int y=ans.front();
                 ans.pop();
                 mp[y]--;
            }
        }
        ans.push(val);
        mp[val]++;

        mx=max(mx,(int)ans.size());
        j++;
    }
    cout<<mx<<endl;


    return 0;
}