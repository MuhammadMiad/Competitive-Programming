#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;
cin>>t;
vector<int >v;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    ll x=sqrt(sum);
    if(x*x==sum){
        v.push_back(1);
    }
    else{
        v.push_back(0);
    }
}
for(int i=0;i<v.size();i++){
    if(v[i]==1){
        cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
