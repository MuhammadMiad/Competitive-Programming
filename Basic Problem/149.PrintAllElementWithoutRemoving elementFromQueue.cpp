#include<bits/stdc++.h>
using namespace std;
int main(){
queue<int>q;
q.push(5);
q.push(8);
q.push(10);
q.push(15);
q.push(30);

int n=q.size();
while(n--){
  cout<<q.front()<<" ";
  q.push(q.front());
  q.pop();
}
cout<<endl;
cout<<"Check Size:"<<q.size()<<endl;

return 0;
}
