#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i];
sort(begin(v),end(v));
int x=v[0],cnt=1;
for(int i=1;i<n;i++){
   if(x==v[i])cnt++;
   else break;
}
if(cnt%2!=0)cout<<"Lucky"<<endl;
else cout<<"Unlucky"<<endl;


return 0;
}
