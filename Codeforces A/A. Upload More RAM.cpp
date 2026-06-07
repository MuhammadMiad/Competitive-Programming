#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=a-1;
        int ans=x*b;
        v.push_back(ans+1);
    }
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
 }

return 0;
}
