#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
    int n;cin>>n;
    priority_queue<int>p;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       while(x){
        p.push(x);
        x/=2;
       }
    }
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;

    }
return 0;
}
