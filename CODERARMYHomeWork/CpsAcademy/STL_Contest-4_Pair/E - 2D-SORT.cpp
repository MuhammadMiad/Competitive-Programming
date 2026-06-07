#include<bits/stdc++.h>

using namespace std;
bool cmp(pair < int, int > a, pair < int, int > b)
{
    if (a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector < pair < int, int >> p;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin>>x>>y;
            p.push_back({x,y});
        }
        sort(p.begin(), p.end(), cmp);
        for (auto &x: p)
        {
           cout<<x.first<<" "<<x.second<<endl;
        }
    }
}
