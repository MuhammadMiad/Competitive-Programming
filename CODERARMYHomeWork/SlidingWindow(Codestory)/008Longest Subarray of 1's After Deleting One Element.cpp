#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int>& nums)
{
    int n=nums.size();
    if(count(begin(nums),end(nums),1)==n){
        return n-1;
    }
    int second=0;
    int first=0;
    int cnt=0;
    int zero=0;
    int mx=0;
    while(second<n)
    {
        if(nums[second]==1)cnt++;
        if(nums[second]==0)zero++;
        while(zero>1)
        {
            mx=max(mx,cnt);
            if(nums[first]==1)cnt--;
            if(nums[first]==0)zero--;
            first++;

        }
        second++;
    }
    mx=max(mx,cnt);


    return mx;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int mx=longestSubarray(arr);
    cout<<mx<<endl;

    return 0;
}
