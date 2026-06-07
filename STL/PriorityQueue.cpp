#include<bits/stdc++.h>
using namespace std;
int main(){
priority_queue<int,vector<int>,greater<int>>pq,pp;
pq.push(10);
pq.push(5);
pq.push(80);
pq.push(40);
pq.push(30);

pp.push(55);
pp.push(66);
pp.push(77);
pp.push(88);
pp.emplace(100);
pq.swap(pp);
pq.pop();
cout<<pq.top()<<endl;
while(pq.size()!=0){
    cout<<pq.top()<<" ";
    pq.pop();
}

return 0;
}
