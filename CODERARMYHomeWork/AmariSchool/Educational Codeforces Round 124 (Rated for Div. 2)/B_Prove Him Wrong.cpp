#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll mul=1;
        ll mx=1e9;
        vector<ll>arr;
        while(mul<=mx){
            arr.push_back(mul);
            mul*=3;

        }
        if(n<=arr.size()){
            cout<<"YES"<<endl;
         for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
        else cout<<"NO"<<endl;


    }


return 0;
}
