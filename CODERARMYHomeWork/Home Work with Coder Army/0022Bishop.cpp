#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
cout<<min(a-1,b-1)+min(6-a,b-1)+min(a-1,6-1)+min(6-a,6-b)<<endl;

return 0;
}
