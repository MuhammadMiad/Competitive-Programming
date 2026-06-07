#include<bits/stdc++.h>
using namespace std;
vector<int> printFirstNegativeInteger(vector<int>& arr, int k)
{
    ///TimeComplexity:O(n)And Space Com:O(1)
    vector<int>ans;
    queue<int>q;
    for(int i=0; i<k-1; i++)
    {
        if(arr[i]<0)q.push(i);
    }
    for(int i=k-1; i<arr.size(); i++)
    {
        if(arr[i]<0)q.push(i);
        if(q.empty())ans.push_back(0);
        else
        {
            if(q.front()<=i-k)
                q.pop();
            if(q.empty())
                ans.push_back(0);
            else
                ans.push_back(arr[q.front()]);
        }
    }
    return ans;
}
int main()
{
    vector<int>arr= {-8,2,3,-6,10};
    int k=2;
    vector<int>ans=printFirstNegativeInteger(arr,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
