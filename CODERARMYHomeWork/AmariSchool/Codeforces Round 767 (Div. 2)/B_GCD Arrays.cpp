#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    long int l,r,k;
    cin>>l>>r>>k;
    long int odd=0,even=0;

  if(k==0){
    if(l==r and l>1){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
   continue;
  }
   if(l%2==0 and r%2==0){
        odd=(r-l+1)/2;
        even=odd+1;
    }
    else if(l%2==1 and r%2==1){
        even=(r-l+1)/2;
        odd=even+1;
    }
    else if((l%2==1 and r%2==0)||(l%2==0 and r%2==1)){
        odd=(r-l+1)/2;
        even=(r-l+1)/2;
    }
   if(odd==even and odd<=k){
    cout<<"YES"<<endl;
    continue;
   }
   if(odd>even and odd<=k){
    cout<<"YES"<<endl;
    continue;
   }
   if(even>odd and odd<=k){
    cout<<"YES"<<endl;
    continue;
   }


    cout<<"NO"<<endl;

   }

return 0;
}
