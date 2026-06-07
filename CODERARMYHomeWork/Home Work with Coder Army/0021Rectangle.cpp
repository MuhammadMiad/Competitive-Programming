#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c)){
    cout<<"It's Rectangle."<<endl;
}
else cout<<"It's not Rectangle."<<endl;

return 0;
}
