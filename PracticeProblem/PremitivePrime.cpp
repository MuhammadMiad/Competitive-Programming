#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<long long >store(n+2,0);
  for(int i=2;i*i<=n;i++){
    if(store[i]==0){
        for(int j=i*i;j<=n;j+=i){
            store[j]=1;
        }
    }
  }
  int cnt=0;
  for(int i=3;i<n;i++){
    if(store[i]==0)cnt++;
  }
  cout<<cnt<<endl;
 return 0;
}
