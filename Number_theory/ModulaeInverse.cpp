#include<bits/stdc++.h>
using namespace std;
int Power(int b,int p,int m){
int result=1;
while(p){
    if(p%2==1){
        result=(result*b)%m;
        p--;
}
else{
    b=(b*b)%m;
    p/=2;
}
}
return result%m;

}
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int a, b,m;
    cin>>a>>b>>m;
    int x=Power(b,m-2,m);
    int ans=(a*x)%m;
  // cout<<ans<<endl;
    v.push_back(ans);

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
