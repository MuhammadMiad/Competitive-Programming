#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
        int n,k;cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        int x=1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                x++;
            }
        }

        if(n==x-1)cout<<0<<endl;
        else{
            int rem=n-(x-1);
             if(rem%k==0)cout<<rem/k<<endl;
            else cout<<rem/k+1<<endl;
        }



}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}
