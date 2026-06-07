#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         if(n<=2)cout<<200<<endl;
         else if(n<=4)cout<<n*100<<endl;
         else{
            int totalcab=n/4;
            int rem=n%4;
            if(rem==0)cout<<totalcab*4*100<<endl;
            else if(rem==3)cout<<totalcab*4*100+300<<endl;
            else if(rem==1)cout<<totalcab*4*100+100<<endl;
            else cout<<totalcab*4*100+200<<endl;
         }

    }


return 0;
}
