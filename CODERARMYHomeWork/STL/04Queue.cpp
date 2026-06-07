#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(4);
    q.push(6);
    q.push(1);
    q.push(3);
    q.emplace(45);


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;


return 0;
}
