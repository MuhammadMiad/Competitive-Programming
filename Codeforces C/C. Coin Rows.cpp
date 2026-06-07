#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
int t;
cin>>t;
while(t--){
    int m;
    cin>>m;
    int arr1[m],arr2[m];
    for(int i=0;i<m;i++)cin>>arr1[i];
    for(int i=0;i<m;i++)cin>>arr2[i];

    int pre1[m+1],pre2[m+1];
    pre1[0]=arr1[0];
    pre2[0]=arr2[0];
    for(int i=1;i<m;i++)pre1[i]=pre1[i-1]+arr1[i];
    for(int i=1;i<m;i++)pre2[i]=pre2[i-1]+arr2[i];

    ll ans=pre1[m-1]-pre1[0];
    for(int i=1;i<m;i++){
        ll a=pre2[i-1];
        ll b=pre1[m-1]-pre1[i];
        ans=min(ans,max(a,b));
    }
    cout<<ans<<endl;

}


return 0;
}
