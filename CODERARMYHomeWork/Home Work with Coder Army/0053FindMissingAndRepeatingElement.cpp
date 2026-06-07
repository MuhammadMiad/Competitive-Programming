#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans(n+1,0);
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(ans[i]>1)cout<<"Repeating Value:"<<ans[i]<<endl;
        if(ans[i]==0)cout<<"Missing Value:"<<i<<endl;
    }
    cout<<endl;


return 0;
}
