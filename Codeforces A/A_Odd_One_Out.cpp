#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int k,p,m;
        cin>>k>>p>>m;
        if(k==p)
            v.push_back(m);
        else if(k==m)
            v.push_back(p);
        else
            v.push_back(k);

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


return 0;
}
