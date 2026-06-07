#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<queue<pair<int,int>>>arr;
    queue<pair<int,int>>work_q;
    for(int i=0; i<m; i++)
    {
        queue<pair<int,int>>q;
        int k;
        cin>>k;
        for(int j=0; j<k; j++)
        {
            int x;
            cin>>x;
            q.push({x,i});
        }
        work_q.push(q.front());
        q.pop();
        arr.push_back(q);

    }

    unordered_map<int,int>mp;
    unordered_set<int>st;
    int rem=n;
    while(work_q.size())
    {
        auto [x,ind]=work_q.front();
        work_q.pop();
        if(st.count(x))
        {
            st.erase(x);
            rem--;
            if(arr[ind].size())
            {
                work_q.push({arr[ind].front()});
                arr[ind].pop();
            }
            int in=mp[x];
            if(arr[in].size())
            {
                work_q.push({arr[in].front()});
                arr[in].pop();
            }

        }
        else
        {
            st.insert(x);
            mp[x]=ind;
        }
    }
    if(rem)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;




    return 0;
}
