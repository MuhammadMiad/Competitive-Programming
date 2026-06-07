#include<bits/stdc++.h>
using namespace std;
int check(int n){
  string str=to_string(n);
  if(str[0]!=str[1])return 0;
  else return 1;
}
int main(){
  int n;cin>>n;
  vector<int>arr(n+1);
  for(int i=1;i<=n;i++){
    cin>>arr[i];
  }
  int cnt=0;
  for(int i=1;i<=n;i++){
    if(i<=9){
       int val = (i * 10) + i;
       if(arr[i]>=val)cnt+=2;
       else if(arr[i]>=i)cnt++;

    }
    else{
       if(check(i) and i!=100){
          if(i<=arr[i])cnt+=2;
          else if((i%10)<=arr[i]) cnt++;
       }
    }
  }
  cout<<cnt<<endl;

return 0;
}
