#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==0)return b;

  return gcd(b%a,a);
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int flag=0;
    for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
           if(gcd(arr[i],arr[j])<=2){
             flag=1;
             break;
           }
         }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
   }

return 0;
}
