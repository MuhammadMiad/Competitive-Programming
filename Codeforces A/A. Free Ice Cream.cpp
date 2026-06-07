#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
ll n,m,y;
char x;
cin>>n>>m;
int  c=0;
for(int i=0;i<n;i++){
    cin>>x;
    cin>>y;


     if(x=='+')
     {
         m+=y;

         }
         else if(x=='-'&&m>=y){
            m-=y;
         }
         else c++;

}

cout<<m<< " "<<c<<endl;
return 0;
}
