#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,x,y;
cin>>a>>b>>x>>y;
if(max(a,x)>min(b,y))cout<<-1<<endl;
else cout<<max(a,x)<<" "<<min(b,y)<<endl;
return 0;
}
