#include<bits/stdc++.h>
using namespace std;
queue<int>Reverse(queue<int>&q)
{   int n=q.size();
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
   while(!st.empty()){
    q.push(st.top());
    st.pop();
   }
    return q;
}
int main()
{
    queue<int>q;
    q.push(5);
    q.push(8);
    q.push(10);
    q.push(15);
    q.push(30);

    Reverse(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}

