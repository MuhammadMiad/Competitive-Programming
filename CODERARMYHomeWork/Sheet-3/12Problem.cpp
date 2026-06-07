#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n),ans;
    for(int i=0;i<n;i++)cin>>v[i];

    int i=1;
    while(1){
     int a=0,b=i;
    while(b!=n+1){
        int mx=INT_MIN;
        for(int j=a;j<b;j++){
            mx=max(mx,v[j]);
        }
        a++,b++;
        ans.push_back(mx);
    }
    if(a==1&&b==n+1)break;
    i++;
    }
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;

}
return 0;
}
