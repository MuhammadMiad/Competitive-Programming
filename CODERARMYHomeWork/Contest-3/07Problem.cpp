#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
      int  even=0,odd=0;
      for(int i=0;i<n;i++){
        if(arr[i]%2==0)even++;
        else odd++;
      }

      int total=abs(even-odd);
      cout<<total/2<<endl;
      }
      else{
        cout<<"-1"<<endl;
      }

    }

return 0;
}
