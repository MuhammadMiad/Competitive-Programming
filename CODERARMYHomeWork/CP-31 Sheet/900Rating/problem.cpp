#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)return a.first>b.first;
    else return a.second>b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        int x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        sort(begin(v),end(v),comparator);
        int alic=0,bob=0;
        int flag=0;
        for(int i=0; i<v.size(); i++)
        {
            int s=v[i].second/2;
            int check=v[i].second;
            if(flag==0){
                if(check%2){
                    alic+=(s+1)*(v[i].first);
                    bob+=s*v[i].first;
                    flag=1;
                }
                else{
                    alic+=s*v[i].first;
                    bob+=s*v[i].first;
                    flag=0;
                }
            }
            else{
                if(check%2){
                    bob+=(s+1)*v[i].first;
                    alic+=s*v[i].first;
                    flag=0;
                }
                else{
                    alic+=s*v[i].first;
                    bob+=s*v[i].first;
                    flag=1;
                }
            }

        }

        cout<<alic<<" "<<bob<<endl;
    }

    return 0;
}
