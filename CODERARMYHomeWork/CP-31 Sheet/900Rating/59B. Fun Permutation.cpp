#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];

    }

    for(int i=0;i<n;i++){
        cout<<(n+1)-ar[i]<<" ";
    }
    cout<<endl;

  }

return  0;
}
