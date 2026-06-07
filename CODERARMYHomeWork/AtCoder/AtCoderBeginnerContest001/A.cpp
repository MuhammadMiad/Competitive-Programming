#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   long long int pro=1;
   for(int i=a;i<=b;i++){
    pro*=i;
   }
   if(pro<0)cout<<"Negative"<<endl;
   else if(pro==0)cout<<"Zero"<<endl;
   else cout<<"Positive"<<endl;

return 0;
}
