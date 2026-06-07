#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int store;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i==0){
                store=arr[i];
            }
            if(store<=arr[i])cnt++;
        }

        cout<<cnt<<endl;
    }


return 0;
}
