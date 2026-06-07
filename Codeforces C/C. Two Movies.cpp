#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int arr[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        for(int i=0;i<n;i++) cin>>arr[i];
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1+=ar[i];
            sum2+=arr[i];
        }
        int mx=max(sum1,sum2);
        if(mx>0) v.push_back(1);
        else if(mx<0) v.push_back(-1);
        else v.push_back(0);
    }
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
