#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0;
    int mx=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
            mx=max(mx,cnt);
        }
        else cnt=0;
    }
    cout<<mx<<endl;
  }

return 0;
}
