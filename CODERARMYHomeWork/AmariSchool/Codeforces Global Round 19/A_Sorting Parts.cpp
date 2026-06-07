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

        if(is_sorted(begin(arr),end(arr)))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


return 0;
}
