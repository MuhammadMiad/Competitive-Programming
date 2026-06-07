#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(begin(arr),end(arr));

    while(m--){
        int k;
        cin>>k;
        cout<<upper_bound(begin(arr),end(arr),k)-begin(arr)<<" ";
    }
    cout<<endl;

    return 0;
}