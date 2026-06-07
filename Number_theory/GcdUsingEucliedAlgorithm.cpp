#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b){
    if(b==0) return a;
else return GCD(b,a%b);
}
int main(){
    int t;
    cin>>t;
    vector<int >v;
    while(t--){
    int n,q;
    cin>>n>>q;
    int arr[n+3];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
 int pre[n+2];
 int pos[n+3];
 pre[0]=0;
    for(int i=1;i<=n;i++){
        pre[i]=GCD(pre[i-1],arr[i]);
    }
    pos[n+1]=0;
    for(int i=n;i>=1;i--){
        pos[i]=GCD(pos[i+1],arr[i]);
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=GCD(pre[l-1],pos[r+1]);
       v.push_back(ans);

    }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
return 0;
}
