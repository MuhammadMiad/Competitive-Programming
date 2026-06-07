#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void sieve(int n){
int prime[100000];
memset(prime,0,sizeof(prime));
for(int i=2;i*i<=n;i++){
    if(prime[i]==0){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=1;
        }
    }
}
for(int i=2;i<=n;i++){
    if(prime[i]==0) v.push_back(i);
}
}
void init(int l ,int r){
if(l==1) l++;
int mx=r-l+1;
int arr[mx+1];
memset(arr,0,sizeof(arr));
for(int p:v){
    if(p*p<=r){
        int i=(l/p)*p;
        if(i<l) i+=p;
        for( ; i<=r;i+=p){
            if(i!=p){
                arr[i-l]=1;
            }
        }
    }
}
for(int i=0;i<mx;i++){
    if(arr[i]==0){
        cout<<l+i<<" ";
    }

}
cout<<endl;
}
int main(){
    sieve(100000);
int t,L,R;
cin>>t;
while(t--){
    cin>>L>>R;
    init(L,R);
}

return 0;
}
