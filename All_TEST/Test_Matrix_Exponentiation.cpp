#include<bits/stdc++.h>
using namespace std;
const int mod=1e9;
const int N=100;
typedef unsigned long long int ll;
ll Matrix[N][N],Identity[N][N];
void MatrixExpo(ll A[][N],ll B[][N],int n){
  ll product[n+1][n+1];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            product[i][j]=0;
        for(int k=0;k<n;k++){
            ll x=A[i][k]*B[k][j];
            product[i][j]=(product[i][j]+x)%mod;
        }
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        A[i][j]=product[i][j];
    }
  }

}
void Power(ll Matrix[][N],int n,int pow){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j)Identity[i][j]=1;
        else Identity[i][j]=0;
    }
}
while(pow!=0){
    if(pow%2==1){
        MatrixExpo(Identity,Matrix,n);
        pow--;
    }
    else{
        MatrixExpo(Matrix,Matrix,n);
        pow/=2;
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        Matrix[i][j]=Identity[i][j];
    }
}

}
int main(){
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
        cout<<Matrix[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}
