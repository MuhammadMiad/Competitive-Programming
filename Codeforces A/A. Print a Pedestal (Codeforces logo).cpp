#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,d,r;
        cin>>n;
        x=n-6;
        int a=3,b=2,c=1;
         d=x/3;
        a+=d,b+=d,c+=d;
         r=x%3;
        if(r==2){
            a+=1;
            b+=1;
        }
        else if(r==1) a+=1;

        cout<<b<<" "<<a<< " "<<c<<endl;

    }

return 0;
}
