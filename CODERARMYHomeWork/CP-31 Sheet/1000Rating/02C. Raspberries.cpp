#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>arr(n);
        ll mn=k-1;
        int e_cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)e_cnt++;

            if(arr[i]%k==0){
              mn=0;
            }
            else
              mn=min(mn,k-arr[i]%k);

        }
        if(k!=4){
            cout<<mn<<endl;
        }
        else{
            if(e_cnt>=2)cout<<0<<endl;
            else if(e_cnt==1)cout<<min(mn,(ll)1)<<endl;
            else cout<<min(mn,(ll)2)<<endl;
        }


    }


return 0;
}
