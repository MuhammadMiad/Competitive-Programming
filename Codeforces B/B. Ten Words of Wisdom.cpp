#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n,a,b;
    cin>>n;
    int m=0,ans;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a<=10&&b>m){

             m=b;
          ans=i+1;
        }
    }
    v.push_back(ans);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
