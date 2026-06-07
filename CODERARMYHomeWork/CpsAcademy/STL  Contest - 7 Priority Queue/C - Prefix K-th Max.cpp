#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<k;i++){
        int x;cin>>x;
        p.push(x);
    }
    cout<<p.top()<<endl;
    n-=k;
    while(n--){
        int x;
        cin>>x;
        p.push(x);
        p.pop();
        cout<<p.top()<<endl;
    }


return 0;
}
