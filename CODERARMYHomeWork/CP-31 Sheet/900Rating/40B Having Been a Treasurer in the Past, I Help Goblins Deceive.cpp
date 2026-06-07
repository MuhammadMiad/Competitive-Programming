/**                        In the name of allah
                                  miad
                            handle:muhammadmiad
                            muhammadmiad25@gmail
*/#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll h=0,u=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='-')h++;
        else u++;
    }
    ll ans;
    if(h%2){
       ans=(h/2+1)*u*(h/2);
    }
    else{
       ans=(h/2)*u*(h/2);
    }
    cout<<ans<<endl;
  }



return 0;
}
