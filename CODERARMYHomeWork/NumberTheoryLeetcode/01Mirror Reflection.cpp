#include<bits/stdc++.h>
using namespace std;
int mirrorReflection(int p, int q) {
  while(p%2==0 and q%2==0){
    p/=2;
    q/=2;
  }
  if(p%2==0 and q%2)return 2;
  else if(p%2 and q%2==1)return 0;
  else return 1;

}
int main(){
 int p,q;
 cin>>p,q;
 int ans=mirrorReflection(p,q);
 cout<<ans<<endl;
return 0;
}
