#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
  int sum,equal1,equal2,c=0;
  sum=n+m;
  for(int a=0;a<sum;a++){
    for(int b=0;b<sum;b++){
        equal1=pow(a,2)+b;
        equal2=a+pow(b,2);
        if(equal1==n&&equal2==m){
            c++;
        }
    }
  }
  cout<<c<<endl;

return 0;
}
