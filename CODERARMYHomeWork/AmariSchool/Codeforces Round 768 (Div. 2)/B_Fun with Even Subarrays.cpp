#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=n;i>0;){
            if(i==1)break;
            if(i>1 and arr[i-1]==arr[n]){
                i--;
            }
            else{
                ans++;
                i-=n-i+1;
            }
        }
        cout<<ans<<endl;
    }

return 0;
}
