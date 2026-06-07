#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> threeSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<vector<int>>v;
       set<vector<int>>st;
       int n=nums.size();
       for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        while(left<right){

            if(nums[left]+nums[right]+nums[i]==0){
                st.insert({nums[i],nums[left],nums[right]});
                left++,right--;
            }
            else if(nums[i]+nums[left]+nums[right]>0)right--;
            else left++;


        }
      }
      for(auto it:st){
        v.push_back(it);
      }
      return v;
    }
int main(){
vector<int>v={-1,0,1,2,-1,-4};
vector<vector<int>>arr=threeSum(v);
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
}
return 0;
}
