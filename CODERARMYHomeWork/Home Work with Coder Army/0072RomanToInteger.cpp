#include<bits/stdc++.h>
using namespace std;
int fun(char ch){
if(ch=='I')return 1;
else if(ch=='V')return 5;
else if(ch=='X')return 10;
else if(ch=='L')return 50;
else if(ch=='C')return 100;
else if(ch=='D')return 500;
else return 1000;

}
int main(){
   string str;//MCMXCIV
   cin>>str;
  int  index=0;
  int ans=0;
  while(index<str.size()-1){
      if(fun(str[index])<fun(str[index+1])){
        ans-=fun(str[index]);
      }
      else ans+=fun(str[index]);

      index++;
  }
  ans+=fun(str[index]);
  cout<<ans<<endl;

return 0;
}
