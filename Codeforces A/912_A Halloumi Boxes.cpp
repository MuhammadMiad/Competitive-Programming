#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    if(is_sorted(arr,arr+n))cout<<"YES"<<endl;
    else{
    if(k==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }


}

return 0;
}
