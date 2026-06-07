#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k=1,co=0;
 cin>>n;
 while(n>0&&n>=co){

        co=0;

    for(int i=1;i<=k;i++){
        n-=i;


    }
      k++;
    for(int j=1;j<=k;j++){
         co+=j;
    }


 }
 cout<<k-1<<endl;

return 0;
}
