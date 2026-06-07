#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v;
while(n--){
   int x,y,n;
   cin>>x>>y>>n;
   int s=n-y;
   int ans=s%x;
   int Fans=(s-ans)+y;
   v.push_back(Fans);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}



return 0;
}
