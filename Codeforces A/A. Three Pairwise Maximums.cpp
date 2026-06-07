#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    if(x==y&&y==z) {
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    else if((x==y||y==z||x==z)&&((x<y&&x<z)||(y<x&&y<z)||(z<x&&z<y))){
     cout<<"YES"<<endl;
     cout<<max(x,max(y,z))<<" "<<min(x,min(y,z))<<" "<<'1'<<endl;
    }
    else cout<<"NO"<<endl;
}


return 0;
}
