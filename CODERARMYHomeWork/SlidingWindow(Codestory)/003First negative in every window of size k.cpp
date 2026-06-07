#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>arr,int k)
{
    int n=arr.size();
    int i=0;
    int j=0;
    vector<int>ans;
    queue<int>q;
    while(j<n)
    {
        if(arr[j]<0)q.push(j);
        if(j-i+1==k)
        {
            if(!q.empty())
            {
                if(q.front()==i)
                {
                    ans.push_back(arr[q.front()]);
                    q.pop();
                }
                else ans.push_back(arr[q.front()]);

            }
            else ans.push_back(0);

            i++;
        }
        j++;
    }

    return ans;

    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    vector<int>ans=solve(arr,k);
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;

    return 0;
}
