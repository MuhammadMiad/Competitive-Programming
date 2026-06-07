#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int flag=0;
    while(t--){
      string word;
      cin>>word;
       if(word=="and"||word=="not"||word=="that"||word=="the"||word=="you"){
        flag=1;
        break;
      }
    }
   if(flag)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;

return 0;
}
