#include<bits/stdc++.h>
using  namespace std;
int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
 int co=0;
for(int i=0;i<n;i++){
    int x=5-arr[i];
    if(x>=k) co++;
}
cout<<co/3<<endl;

return 0;
}
