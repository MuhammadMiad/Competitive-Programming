#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<n;i++){
            int x;
    cin>>x;
        p.push(x);
    }
    while(p.size()>1){
        int first=p.top();
        p.pop();
        int second=p.top();
         p.pop();
         int sum=first+(second-first)/2;
         p.push(sum);
    }
    cout<<p.top()<<endl;
       p.pop();
 }

return 0;
}
