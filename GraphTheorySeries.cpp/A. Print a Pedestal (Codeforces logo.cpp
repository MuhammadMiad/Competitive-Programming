#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int  n;
        cin>>n;
        int  x=n/3;
        int y=n/3;
        int z=n/3;

        int   p=n%3;
        x--;
        y--;
        z--;
        p+=3;


        if(p==3){
            cout<<y+1<<" "<<x+2<<" "<<z<<endl;
        }
        else if(p==4){
             cout<<y+1<<" "<<x+3<<" "<<z<<endl;
        }
        else if(p==5){
            cout<<y+2<<" "<<x+3<<" "<<z<<endl;
        }
    }

return 0;
}
