#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   N  100
#define mod 100000007
ll I[N][N],Base[N][N];
vector<int >v;
void Multi(ll A[][N], ll B[][N], ll dim){
ll Result[dim+1][dim+1];
for(int i=0;i<dim;i++){
    for(int j=0;j<dim;j++){
        Result[i][j]=0;
        for(int k=0;k<dim;k++){
            ll x=(A[i][k]*B[k][j])%mod;
            Result[i][j]=(Result[i][j]+x)%mod;
        }
    }
}
for(int i=0;i<dim;i++){
    for(int j=0;j<dim;j++){
        A[i][j]=Result[i][j];
    }
}

}
void  Solve ( ll a, ll b, ll n){

  I[0][0]=I[1][1]=1;
  I[0][1]=I[1][0]=0;

  Base[0][0]=0;
  Base[0][1]=Base[1][1]=Base[1][0]=1;
  n--;
  while(n){
    if(n%2==1){
        Multi(I,Base,2);
        n--;
    }
    else{
        Multi(Base,Base,2);
        n/=2;
    }

  }
 ll ans=a*I[0][1]+b*I[1][1];
 v.push_back(ans);
}
int main(){
int t;
cin>>t;
while(t--){
    int a,b,n;
    cin>>a>>b>>n;

    Solve(a,b,n);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
