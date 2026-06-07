#include<bits/stdc++.h>
using namespace std;
int main(){
int r,b,mn;
cin>>r>>b;
if(r>=b){
     mn=b;

    cout<<mn<< " "<<(r-b)/2<<endl;
}
else{
    mn=r;
     cout<<mn<< " "<<(b-r)/2<<endl;

}
return 0;
}
