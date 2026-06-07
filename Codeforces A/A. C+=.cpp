#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    int mx=max(a,b);
    int mn=min(a,b);
   int co=1;
    while(1){
        if(co%2==1){
           mn+=mx;
        }
        else{
            mx+=mn;
        }
        if(mn>n){
            break;
        }
        if(mx>n){
            break;
        }
    co++;
    }

   v.push_back(co);
}
for(auto it:v){
    cout<<it<<endl;
}
return 0;
}
