#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==3){
        cout<<1<<" "<<3<<" "<<2<<endl;
        cout<<2<<" "<<3<<" "<<1<<endl;
        cout<<3<<" "<<1<<" "<<2<<endl;
        continue;
    }
    int x=n;
    int a=n;
    while(x--){
        for(int i=a;i>=1;i--){
            cout<<i<<" ";
        }
        for(int i=n;i>n-(n-a);i--){
            cout<<i<<" ";
        }
        cout<<endl;
        a--;
    }
  }

return 0;
}
