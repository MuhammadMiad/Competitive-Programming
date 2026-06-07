#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    vector<int>v;
    while(t--){
        cin>>n;
        v.push_back(n/2);
    }
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}


return 0;
}
