#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n<=10){
        cout<<n<<endl;
        continue;
    }
    else{
        int cnt=0;
        int s;
        while(n){
            s=n%10;
            n/=10;
            cnt++;
        }
        cnt--;
        int total=(cnt*9)+s;
        cout<<total<<endl;
    }
  }

return 0;
}
