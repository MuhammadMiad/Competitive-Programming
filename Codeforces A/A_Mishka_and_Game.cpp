#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;
cin>>n;
int sum1=0;
int sum2=0;
for(int i=0;i<n;i++){
    cin>>a>>b;
    sum1+=a;
    sum2+=b;
}
if(sum1>sum2){
    cout<< "Mishka"<<endl;
}
else if(sum1<sum2)
{
    cout<<"Chris"<<endl;
}
else if(sum1==sum2){
    cout<<"Friendship is magic!^^"<<endl;
}

return 0;
}
