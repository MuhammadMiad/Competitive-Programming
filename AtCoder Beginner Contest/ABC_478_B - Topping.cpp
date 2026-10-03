#include<bits/stdc++.h>
using namespace std;
int  main(){
       int n,v;
         cin>>n>>v;
         vector<int>arr(n+1);
         for(int i=1;i<=n;i++)cin>>arr[i];

         int  mx=0;
         for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                for(int k=j+1;k<=n;k++){
                       if(i+j+k<=v){
                        mx=max(mx,arr[i]+arr[j]+arr[k]);
                       }
                }
            }
         }

         cout<<mx<<endl;

return 0;
}
