#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int>a,pair<int,int>b){
  return a.second<b.second;
}
int main()
{
    int start[]= {25,0,14,24,18,3,17};
    int End[]= {29,25,24,26,25,23,18};
    int n=7;

    vector<pair<int,int>>timer;

    for(int i=0; i<n; i++)
    {
        timer.push_back({start[i],End[i]});
    }

    sort(timer.begin(),timer.end(),comparator);

    int ending=-1;
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(timer[i].first>ending)
        {
            cnt++;
            ending=timer[i].second;
        }
    }
    cout<<cnt<<endl;
    for(int i=0; i<timer.size(); i++)
    {
        cout<<timer[i].first<<" "<<timer[i].second<<endl;
    }
    return 0;
}
