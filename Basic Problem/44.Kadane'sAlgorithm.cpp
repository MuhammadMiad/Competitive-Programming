#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> &arr) {
        long  long  mx=INT_MIN,prefix=0;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            mx=max(mx,prefix);
            if(prefix<0)prefix=0;
        }
        return mx;
    }
int main(){
vector<int>arr={3,4,-5,8,-12,7,6,2};
int ans=maxSubarraySum(arr);
cout<<"Maximum Sum Contiguous Subarray:"<<ans<<endl;

return 0;
}
