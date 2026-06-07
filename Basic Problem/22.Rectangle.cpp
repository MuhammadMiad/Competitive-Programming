#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;

if((a==b and c==d)||(a==c and b==d)||(a==d and b==c))
cout<<"It's Rectangle."<<endl;
else
cout<<"It's Not Rectangle."<<endl;

return 0;
}
