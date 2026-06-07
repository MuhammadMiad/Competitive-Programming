#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int c=0;
for(int i=2;i<=n;i+=2){
    c++;
    cout<<i<<endl;
}
if(c==0)cout<<-1<<endl;

return 0;
}
