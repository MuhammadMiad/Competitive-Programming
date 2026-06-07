#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  int t;cin>>t;while(t--){
     ll n;
     cin>>n;
     vector<ll>arr(n);
     int to=0,tr=0,fi=0,se=0,el=0,tro=0,sot=0,un=0,te=0,unt=0;
     for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2)to=1;
        if(arr[i]%3)tr=1;
        if(arr[i]%5)fi=1;
        if(arr[i]%7)se=1;
        if(arr[i]%11)el=1;
        if(arr[i]%13)tro=1;
        if(arr[i]%17)sot=1;
        if(arr[i]%19)un=1;
        if(arr[i]%23)te=1;
        if(arr[i]%29)unt=1;


     }

     if(to)cout<<2<<endl;
     else if(tr)cout<<3<<endl;
     else if(fi)cout<<5<<endl;
     else if(se)cout<<7<<endl;
     else if(el)cout<<11<<endl;
     else if(tro)cout<<13<<endl;
     else if(sot)cout<<17<<endl;
     else if(un)cout<<19<<endl;
     else if(te)cout<<23<<endl;
     else if(unt)cout<<29<<endl;
     else cout<<-1<<endl;

  }


return 0;
}
