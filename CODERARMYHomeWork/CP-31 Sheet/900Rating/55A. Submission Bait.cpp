#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(begin(arr),end(arr),greater<int>());
        int mx=0;
        int alic=0;
        bool flag=true;
        for(int i=0;i<n;i++){
           if(flag){
            mx=arr[i];
            flag=!flag;
            alic=1;
           }
           else if(mx<=arr[i]){
            alic=0;
            flag=!flag;
           }
           else break;
        }
        if(alic)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


return 0;
}
