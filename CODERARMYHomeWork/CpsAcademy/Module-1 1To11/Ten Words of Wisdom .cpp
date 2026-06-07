#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;while(t--){
    int n;cin>>n;
    int mx=0,index;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        if(x<=10 and y>mx){
            mx=y;
            index=i;
        }
    }
   cout<<index<<endl;

   }

return 0;
}
