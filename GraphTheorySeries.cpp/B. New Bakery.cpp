#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int k=min(n,b);
    int sum=0;
    for(int i=0;i<=k;i++){
        sum+=(b-i+1);
    }
    int num=n-k;
    int p=num*a;
    v.push_back(sum+p);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
