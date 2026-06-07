#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 5
ll Identity[N][N], Base[N][N];
void Mul(ll A[][N], ll B[][N], ll dim){
ll result[dim+1][dim+1];

for(int i=0;i<dim;i++){
    for(int j=0;j<dim;j++){
        result[i][j]=0;
        for(int k=0;k<dim;k++){
            ll x=A[i][k]*B[k][j];
            result[i][j]+=x;
        }
    }
}

for(int i=0;i<dim;i++){
    for(int j=0;j<dim;j++){
        A[i][j]=result[i][j];
    }
}

}
void Solve(ll a,ll b, ll n){
   Identity[0][0]=Identity[1][1]=1;
   Identity[0][1]=Identity[1][0]=0;

   Base[0][0]=0;
   Base[0][1]=Base[1][1]=Base[1][0]=1;

  n--;
  while(n){
    if(n%2==1){
        Mul(Identity,Base,2);
        n--;
    }
    else{
        Mul(Base,Base,2);
        n/=2;
    }
  }
  ll ans=a*Identity[0][1]+b*Identity[1][1];
 //for(int i=0;i<2;i++){
//    for(int j=0;j<2;j++){
//        cout<<Identity[i][j]<< " ";
//    }
//    cout<<endl;
 //}
  cout<<ans<<endl;

}
int main(){
int a,b,n;
cin>>a>>b>>n;
Solve(a,b,n);

return 0;
}
