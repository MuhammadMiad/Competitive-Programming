#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
         int cnt=0,ans=0;
         for(int i=0;i<n;i++){
            if((arr[i]%2!=arr[i+1]%2)or i==n-1){
                ans+=cnt;
                cnt=0;
            }
            else cnt++;
         }

        cout<<ans<<endl;
    }

return 0;
}
