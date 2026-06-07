#include<bits/stdc++.h>
using namespace std;
int GreedyCoinChange(int coin[],int n,int T){
 sort(coin,coin+n);
 reverse(coin,coin+n);
 int rem=T;
 int tcoin=0;
 for(int i=0;i<n;i++){
    int x=rem/coin[i];
    tcoin+=x;
    rem-=(x*coin[i]);
    if(rem==0)break;
 }
 return tcoin;

}
int main(){
    int n,terget;
    cin>>n>>terget;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
  int x=GreedyCoinChange(arr,n,terget);
  cout<<x<<endl;


return 0;
}
