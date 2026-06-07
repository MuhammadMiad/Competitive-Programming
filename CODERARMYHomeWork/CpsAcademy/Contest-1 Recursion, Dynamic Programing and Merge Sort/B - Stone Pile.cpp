#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)cin>>arr[i];
   int l=0;
   int r=n-1;
   long long sum1=0,sum2=0;
   while(l<=r){
    if(sum1>=sum2){
        sum2+=arr[r--];
    }
    else sum1+=arr[r--];
   }

   cout<<abs(sum1-sum2)<<endl;

return 0;
}
