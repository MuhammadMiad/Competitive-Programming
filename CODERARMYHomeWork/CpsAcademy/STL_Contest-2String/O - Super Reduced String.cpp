#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
  int co=1,n;
  while(co){
    co=0;
    n=str.size();
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
          str.erase(i,2);
           co=1;
           break;
        }
    }
  }
  if(str.empty())cout<<"Empty String"<<endl;
  else cout<<str<<endl;


return 0;
}
