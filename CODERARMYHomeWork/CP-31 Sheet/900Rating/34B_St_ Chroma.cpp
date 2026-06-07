#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
           if(i!=k) cout<<i<<" ";
        }
        if(k<n)cout<<k;
        cout<<endl;
    }


return 0;
}
