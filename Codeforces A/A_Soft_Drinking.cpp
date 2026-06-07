#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int litter=k*l;
int x=litter/(n*nl);
int total_limes=c*d;
int y=total_limes/n;
int z=p/(n*np);

cout<<min(x,min(y,z))<<endl;

return 0;
}
