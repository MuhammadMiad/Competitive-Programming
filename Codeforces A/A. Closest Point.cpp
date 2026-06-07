#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  int co=0;
  for(int i=1;i<n;i++){
    if(abs(arr[i-1]-arr[i])%2==0){
            co=1;
            break;
    }
  }
  if(co==1)cout<<"YES"<<endl;
  cout<<"NO"<<endl;

}
int main(){
 int t;
 cin>>t;
 while(t--){
    solve();
 }

return 0;
}
