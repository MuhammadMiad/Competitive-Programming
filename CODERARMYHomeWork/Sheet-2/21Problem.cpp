#include<bits/stdc++.h>
using namespace std;
int digit(int x){
    int ans=0;
 while(x){
    int rem=x%10;
    x/=10;
    ans+=rem;
 }
 return ans;
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    for(int i=1;i<=n;i++){
            int x=digit(i);
         if(a<=x&&x<=b)ans+=i;
    }
    cout<<ans<<endl;
return 0;
}
