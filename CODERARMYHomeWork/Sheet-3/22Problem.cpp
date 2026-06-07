#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

   vector<int>v(n);
   vector<int>fre(m+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        fre[v[i]]++;
    }
    for(int i=1;i<=m;i++){
        cout<<fre[i]<<endl;
        }




return 0;
}
