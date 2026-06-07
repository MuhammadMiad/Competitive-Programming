#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)cin>>arr[i];
   int i;
   for(i=1;i<n;i++){
    if(arr[0]<arr[i])break;
   }
   if(i!=n)cout<<i+1<<endl;
   else cout<<-1<<endl;

return 0;
}
