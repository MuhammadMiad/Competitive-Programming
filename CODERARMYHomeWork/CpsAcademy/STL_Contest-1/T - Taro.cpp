#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int >arr(n+1,0);
    int cnt=0;
    for(int i=0;i<m;i++){
     int x;char ch;
     cin>>x>>ch;
     if(ch=='M' and arr[x]==0){
        arr[x]=1;
        cout<<"Yes"<<endl;
     }
     else cout<<"No"<<endl;
    }

return 0;
}
