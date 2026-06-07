#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long  prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    while(q--){
        long long a,b;
        cin>>a>>b;
        long long  sum;
        if(a==1)
        sum=prefix[b-1];
        else
         sum=prefix[b-1]-prefix[a-2];

        cout<<sum<<endl;

    }

return 0;
}
