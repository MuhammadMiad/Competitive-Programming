#include<bits/stdc++.h>
using namespace  std;
int main(){
int n,h,m,ans,total;
cin>>n;
vector<int >v;
for(int i=0;i<n;i++){
    cin>>h>>m;
    ans=abs(24-h);
     total=ans*60;
     v.push_back(total-m);

}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
