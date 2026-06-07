#include<bits/stdc++.h>
using namespace std;
int main(){

     int a,b,d;cin>>a>>b>>d;
     int dif=b-a;

     if(dif==0)cout<<a<<endl;
     else if(dif%d==0){
        for(int i=a;i<=b;i+=d)cout<<i<<" ";
        cout<<endl;
     }



return 0;
}
