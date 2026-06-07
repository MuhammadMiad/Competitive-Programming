#include<bits/stdc++.h>
using namespace std;
#define cn(x)  cin>>x
#define print(x) cout<<x<<endl
#define print_ys cout<<"YES"<<endl
#define print_no cout<<"NO"<<endl
int main(){
 int t;
 cn(t);
 while(t--){
  int n;
  cn(n);
  string str;
  cn(str);
  if(str.size()==1)print_ys;
  else if(str.size()==2 and str[0]!=str[1])print_ys;
  else print_no;
 }

return 0;
}
