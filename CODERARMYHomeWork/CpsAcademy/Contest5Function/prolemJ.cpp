#include<bits/stdc++.h>
using namespace std;
int main(){
   string str;
   cin>>str;
   for(int i=0;i<str.size();i+=2){
    swap(str[i],str[i+1]);
   }
   cout<<str<<endl;

return 0;
}
