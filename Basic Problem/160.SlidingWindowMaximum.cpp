#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k)
{
    deque<int>dq;
    vector<int>ans;
    for(int i=0; i<k-1; i++)
    {
        if(dq.empty())dq.push_back(i);
        else
        {
            while(!dq.empty()&&nums[i]>nums[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }

    }
    for(int i=k-1; i<nums.size(); i++)
    {
        while(!dq.empty()&&nums[i]>nums[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);

        if(dq.front()<=i-k)
        {
            dq.pop_front();
        }

        ans.push_back(nums[dq.front()]);
    }
    return ans;
}
int main()
{
    vector<int>arr= {4,3,7,5,2,3,1,2,8,7};
    int k=4;
    vector<int>ans=maxSlidingWindow(arr,k);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}
