#include<bits/stdc++.h>
using namespace std;
#define M 99999999   /**Declaration at Globally, Then Array maximum size 1e9**/
int  prime[M];
vector<int>v;
void  seive(int n){
memset(prime,0,sizeof(prime));

for(int i=2;i*i<=n;i++){
    if(prime[i]==0){
        for(int j=i+i;j<=n;j+=i){
            prime[j]=1;
        }
    }
}

for(int i=2;i<=n;i++){
    if(prime[i]==0){
        v.push_back(i);
    }
}

}
int main(){
seive(900000);
int t;
cin>>t;
//cout<<v.size()<<endl;
while(t--){
int n;
cin>>n;
cout<<v[n-1]<<endl;
}
return 0;
}
