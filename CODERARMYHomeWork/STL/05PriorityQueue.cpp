#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,int>>pq;
    pq.push({34,2});
    pq.push({23,5});
    pq.push({40,6});
    pq.push({30,3});

    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    cout<<endl;


return 0;
}
