#include<bits/stdc++.h>
using namespace std;
int fact(int N){
  if(N==0)return 1;
  return N*fact(N-1);
}
int main(){
    int N;
    cin>>N;
    if(N<0){
        cout<<"Factorial is Not possible."<<endl;
        return 0;
    }
    cout<<fact(N)<<endl;
return 0;
}
