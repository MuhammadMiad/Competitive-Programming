#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,cou=0,sub;
cin>>n>>k;
   sub=240-k;
for(int i=1;i<=n;i++){

     if(sub>=5*i){
         sub-=5*i;
         cou++;
     }


}
cout<<cou<<endl;



return 0;
}
