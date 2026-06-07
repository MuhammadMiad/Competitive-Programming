#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        vector<ll>preArr(n);
        preArr[0]=arr[0];
        for(int  i=1;i<n;i++){
            preArr[i]=preArr[i-1]+arr[i];
        }
        while(q--){
         int l,r,k;
         cin>>l>>r>>k;
        ll x=r-l+1;
        ll value,temp;
        if(x%2 and k%2)value=1;
        else value=0;
        if(l>1)temp=preArr[n-1]-(preArr[r-1]-preArr[l-2]);
        else temp=preArr[n-1]-preArr[r-1];

        if(temp%2 != value)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }





    }


return 0;
}
