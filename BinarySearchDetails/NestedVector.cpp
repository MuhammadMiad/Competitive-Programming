#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>>v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int m;
    cin>>m;
    vector<int>temp;
    for(int j=0;j<m;j++){
        int a;
        cin>>a;
        temp.push_back(a);
    }
    v.push_back(temp);
}
for(int i=0;i<v.size();i++){
        cout<<v[i].size()<<endl;
    for(int it:v[i]){
        cout<<it<<" ";
    }
    cout<<endl;
}
return 0;
}
