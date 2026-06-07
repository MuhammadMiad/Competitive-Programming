#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(begin(arr),end(arr),greater<int>());
  int i=0;
  int x=n;
  int cnt=0;
  while(i<n and x ){
    if(x<=arr[i]){
        cnt++;
        i++;
        x--;
    }
    else x--;
  }

  cout<<cnt<<endl;
return 0;
}
