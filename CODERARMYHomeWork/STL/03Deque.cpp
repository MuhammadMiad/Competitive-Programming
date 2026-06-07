#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(10);
    dq.push_front(20);

    for(int i=0;i<dq.size();i++)cout<<dq[i]<<" ";
    cout<<endl;

   // dq.pop_front();
    //dq.pop_back();
    if(is_sorted(begin(dq),end(dq))){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    while(!dq.empty()){
       cout<<dq.front()<<" ";
       dq.pop_front();
    }
    cout<<endl;


return 0;
}
