#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N   1000000
bool sieve[N+1];
vector<int>store;
void createSieve(){
 for(int i=0;i<=N;i++)sieve[i]=0;
 for(int i=2;i*i<=N;i++){
    if(sieve[i]==0){
        for(int j=i*i;j<=N;j+=i){
            sieve[j]=1;
        }
    }
 }
 for(int i=2;i<=N;i++){
    if(sieve[i]==0)store.push_back(i);
 }
}

void init(int l,int r){
if(l==1)l++;
int mx=r-l+1;
int arr[mx+1];
memset(arr,0,sizeof(arr));
for(int p:store){
    if(p*p<=r){
     int i=(l/p)*p;
     if(i<l)i+=p;
     for(  ;i<=r;i+=p){
        if(i!=p){
            arr[i-l]=1;
        }
     }
    }
}
 for(int i=0;i<mx;i++){
        if(arr[i]==0)cout<<l+i<<" ";
    }
    cout<<endl;

}

int main(){
    createSieve();
    int t;
    cin>>t;
    while(t--){
     int l,r;
     cin>>l>>r;
     init(l,r);
     cout<<endl;

    }
return 0;
}
