#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long int llu;
typedef   long long int ll;
#define N 100
#define  mod 100000007
ll  Matrix[N][N],Identity[N][N];

 void Mul(ll A[][N], ll B[][N], ll n){
ll R[n+1][n+1];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        R[i][j]=0;
        for(int k=0;k<n;k++){
            ll x=(A[i][k]*B[k][j])%mod;
            R[i][j]=(R[i][j]+x)%mod;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        A[i][j]=R[i][j];
    }
}
}
void Power(ll Matrix[][N],ll n,ll p){
 for(int i=0;i<n;i++){
    for(int  j=0;j<n;j++){
        if(i==j){
            Identity[i][j]=1;
        }
        else{
            Identity[i][j]=0;
        }
    }
 }

 while(p){
    if(p%2==1){
        Mul(Identity,Matrix,n);
        p--;
    }
    else{
        Mul(Matrix,Matrix,n);
        p/=2;
    }
 }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        Matrix[i][j]=Identity[i][j];
    }
}
}
int main(){
int t;
cin>>t;
while(t--){
        int n,p;
cin>>n>>p;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>Matrix[i][j];
    }
}

Power(Matrix,n,p);

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<Matrix[i][j]<<  "  ";
    }
    cout<<endl;
}
}


return 0;
}
