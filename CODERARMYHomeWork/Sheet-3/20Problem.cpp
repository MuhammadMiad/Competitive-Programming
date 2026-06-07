#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int ans=0,ans1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)ans+=v[i][j];
            if(i+j==n-1)ans1+=v[i][j];
        }
    }
    cout<<abs(ans-ans1)<<endl;

return 0;
}
