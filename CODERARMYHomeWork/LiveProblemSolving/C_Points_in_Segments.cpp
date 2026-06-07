#include<bits/stdc++.h>
using namespace std;
void solve(int tc){
     int n,m;cin>>n>>m;
     vector<int>ar(n);
     for(int i=0;i<n;i++)cin>>ar[i];
     sort(begin(ar),end(ar));
     cout<<"Case "<<tc<<":"<<endl;
     while(m--){
        int a,b;
        cin>>a>>b;
        int first=lower_bound(begin(ar),end(ar),a)-begin(ar);
        int last=upper_bound(begin(ar),end(ar),b)-begin(ar);

        cout<<last-first<<endl;
     }

}
int main(){
    int t;cin>>t;for(int i=1;i<=t;i++) solve(i);
    return 0;
}