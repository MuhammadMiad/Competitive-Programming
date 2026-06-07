#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;

    sort(begin(arr),end(arr));
    vector<vector<int>>ans;
    set<vector<int>>st;
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum==target){
                st.insert({arr[i],arr[left],arr[right]});
                left++,right--;
            }
            else if(sum>target){
                right--;
            }
            else left++;
        }
    }
    for(auto it:st){
        ans.push_back(it);
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}
