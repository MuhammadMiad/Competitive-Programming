#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        vector<int>arr(n);
        long long  sum=x;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2==y%2)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }

return 0;
}
