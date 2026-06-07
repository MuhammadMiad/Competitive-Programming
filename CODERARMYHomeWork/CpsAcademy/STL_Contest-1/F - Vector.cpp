#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    vector<int>arr;
    while(n--){
        int t;
        cin>>t;

        if(t==0){
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        else if(t==1){
            ll p;
            cin>>p;
            cout<<arr[p]<<endl;
        }
        else{
            arr.pop_back();
        }
    }


return 0;
}
