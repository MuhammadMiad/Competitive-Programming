#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v,v1;
while(n--){
    int k,p;
    cin>>k;
    for(int i=0;i<k;i++){
            cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());

    v1.push_back(v[v.size()-1]-v[0]);
  v.clear();
}

for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}

return 0;
}
