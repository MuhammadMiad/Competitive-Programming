#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;
cin>>t;

while(t--){
    ll n;
    cin>>n;
    int cnt=0;
    int  i=1;
    while(1){
        if(n%i!=0){
        cnt=i-1;
        break;
        }
        i++;
    }
   cout<<cnt<<endl;

}


return 0;
}
