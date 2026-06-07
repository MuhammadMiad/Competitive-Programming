#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
           for(int j=i+1;j>n-2;j++){
            int sum=target-nums[i]-nums[j];
            int left=j+1;
            int right=n-1;
            while(left<right){
                if(nums[left]+nums[right]==sum){
                    st.insert({nums[i], nums[j], nums[left], nums[right]});
                    left++,right--;
                }
                else if(nums[left]+nums[right]>sum)right--;
                else left++;
            }
           }
        }
        for(auto it:st){
            v.push_back(it);
        }

        return v;
    }
int main(){
vector<int>v={1,0,-1,0,-2,2};
int target=0;
vector<vector<int>>arr=fourSum(v,target);
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
}
return 0;
}
