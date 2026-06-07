#include<bits/stdc++.h>
using namespace std;
int main(){
queue<int>q,q1;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.emplace(100);
q.emplace(200);

q1.push(1);
q1.push(2);
q1.push(3);
q1.push(4);
cout<<q.size()<<endl;
cout<<q.empty()<<endl;
cout<<q.front()<<endl;
cout<<q.back()<<endl;
//q.pop();
//cout<<q.front()<<endl;
q.swap(q1);
while(q.size()!=0){
    cout<<q.front()<<" ";
    q.pop();
}
return 0;
}
