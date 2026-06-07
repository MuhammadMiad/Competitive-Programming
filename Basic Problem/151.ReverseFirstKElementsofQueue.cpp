#include<bits/stdc++.h>
using namespace std;
queue<int>modifyQueue(queue<int>&q, int k)
{
    stack<int>st;
    while(k--)
    {
        st.push(q.front());
        q.pop();
    }
    int n=q.size();
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    while(n--)
    {
        q.push(q.front());
        q.pop();
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
    int k=3;
    modifyQueue(q,k);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}


