#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
             int n;cin>>n;
             vector<int>ar(n),br(n);

             for(auto &x:ar)cin>>x;
             for(auto &x:br)cin>>x;

             int ans=0;
             for(int i=0;i<n;i++){
                  int j=i;
                  for(;j<n && ar[j]>br[i];j++);

                  if(j==n){
                    ans=-1;
                    break;
                  }

                  for(;j>i;j--){
                    swap(ar[j],ar[j-1]);
                    ans++;
                  }
             }
     cout<<ans<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}
