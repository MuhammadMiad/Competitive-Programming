#include<bits/stdc++.h>
using namespace std;
int main(){

    deque<int >dq;
    dq.push_back(51);
    dq.push_back(52);
    dq.push_back(53);
    dq.push_back(54);
    dq.push_front(50);
    dq.push_front(49);
    dq.pop_back();
    dq.pop_front();

    for(int i=0;i<dq.size();i++){
        cout<<dq.at(i)<<"  ";
    }
    cout<<endl;

    dq.pop_back();
    dq.pop_front();

    cout<<"After Poped :"<<endl;
     for(int i=0;i<dq.size();i++){
        cout<<dq.at(i)<<"  ";
    }
return 0;
}
