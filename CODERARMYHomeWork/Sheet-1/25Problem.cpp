#include<bits/stdc++.h>
using namespace std;
int main(){
long long  a,b,c,d,ans1,ans2,ans3;
cin>>a>>b>>c>>d;
ans1=(a*b)%100;
ans2=(ans1*c)%100;
ans3=(ans2*d)%100;
if(ans3==0)cout<<"00"<<endl;
else if(ans3<10)cout<<'0'<<ans3<<endl;
else
cout<<ans3<<endl;
return 0;
}
