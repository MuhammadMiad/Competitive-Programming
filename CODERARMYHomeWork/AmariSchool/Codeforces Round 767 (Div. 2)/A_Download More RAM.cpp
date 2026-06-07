#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n),arr2(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>arr2[i];
    long long int  sum=k;
    while(1){
            int flag=0;
        for(int i=0;i<n;i++){
            if(sum>=arr[i] and arr[i]!=-1){
                sum+=arr2[i];
                arr[i]=-1;
                flag=1;
            }
        }
        if(flag==0)break;
    }
    cout<<sum<<endl;
   }

return 0;
}
