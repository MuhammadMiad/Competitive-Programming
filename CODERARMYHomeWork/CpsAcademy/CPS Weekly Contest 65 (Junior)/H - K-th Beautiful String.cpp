#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
     long long n,k;
     cin>>n>>k;
     string aa=string(n,'a');
     if(k==1){
        aa[n-1]=aa[n-2]='b';
        cout<<aa<<endl;
        continue;
     }
     else if(k==(n*(n-1))/2){
           aa[0]=aa[1]='b';
        cout<<aa<<endl;
        continue;
     }
     else{
            int x=1;
            while(k>x)k-=x++;
            aa[n-x-1]=aa[n-k]='b';
            cout<<aa<<endl;
            continue;
     }


    }

return 0;
}
