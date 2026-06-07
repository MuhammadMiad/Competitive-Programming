#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    sort(begin(arr),end(arr));
    int i;
    for( i=0;i<=n;i++){
        if(i!=arr[i])break;
    }
    cout<<i<<endl;
 }


return 0;
}
