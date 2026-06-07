#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int x,y,k;
    cin>>x>>y>>k;
    for(int i=1;i<=k;i++){
        x+=i;
        cout<<x<<endl;
        if(x%y==0){
            v.push_back(i);
        }
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
