#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    int X[]={a,a,-a,-a,b,b,-b,-b};
    int Y[]={-b,b,-b,b,-a,a,a,-a};

    set<pair<int,int>>st1,st2;

    for(int i=0;i<8;i++){
       st1.insert({xk+X[i],yk+Y[i]});
       st2.insert({xq+X[i],yq+Y[i]});
    }
    int cnt=0;
    for(auto it:st1){
       if(st2.find(it)!= st2.end())cnt++;
    }
    cout<<cnt<<endl;

 }


return 0;
}
