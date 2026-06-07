#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        ll sum=0;
        for(int i=0;i<n;i++){
            sum=sum|arr[i];
        }
        cout<<sum<<endl;
    }

return 0;
}
