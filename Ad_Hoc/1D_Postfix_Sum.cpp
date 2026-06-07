#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int post[n+1];
    post[n+1]=0;
    for(int i=n;i>=0;i--)post[i]=post[i+1]+arr[i-1];
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<post[l]-post[r]<<endl;
    }

return 0;
}

