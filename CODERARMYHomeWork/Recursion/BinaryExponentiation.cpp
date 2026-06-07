#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll optimalpow(ll a,ll b){
   if(b==0)return 1;
   if(b%2)return a*optimalpow(a,b-1);
   ll half=optimalpow(a,b/2);
   return half*half;
}
int main(){
   ll a,b;
   cin>>a>>b;
   cout<<optimalpow(a,b)<<endl;

return 0;
}
