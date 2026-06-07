#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
map<int,int>mp;
while(t--){
    int n,x;
    cin>>n;
    int d=0;
     x=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            d++;
        }
    }
     if(n>1){
        d+=1;
        }
    mp.insert({x,d});
}
for(auto it:mp){

    cout<<it.first<< " : "<<it.second<<endl;
}
return 0;
}
