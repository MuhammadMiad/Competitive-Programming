#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,l;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){

             if(i%2==0){
                    k=floor(i/2);
                if(k%2==0){
                        if(j==1){
                             cout<<"#";
                      }
                      else
                        cout<<".";
                }
               else if(k%2 ==1){
                     if(j==m){
                             cout<<"#";
                        }
                           else
                        cout<<".";
               }
             }
     else
            cout<<"#";
        }
        cout<<endl;
    }

return 0;
}
