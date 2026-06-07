#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int x,y;
    cin>>x>>y;
    string ss="";
    for(int i=0;i<y;i++){
        ss+='a'+i;
    }
    x--;
    string sss=ss;
    while(x--){
        sss+=ss;
    }
    cout<<sss<<endl;

   }

return 0;
}
