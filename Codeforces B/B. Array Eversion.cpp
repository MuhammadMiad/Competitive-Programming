#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
         int n;cin>>n;
         vector<int>arr(n);
         for(int i=0;i<n;i++)cin>>arr[i];

         int cnt=0;
         int x=arr[n-1];
         for(int i=n-1;i>0;i--){
            if(x<arr[i-1]){
                cnt++;
                x=arr[i-1];
            }
         }

         cout<<cnt<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}
