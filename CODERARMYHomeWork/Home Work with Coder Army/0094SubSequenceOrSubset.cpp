#include<bits/stdc++.h>
using namespace std;
void Subsequence(vector<int>&arr,int index,int n,vector<int>&temp,vector<vector<int>>&ans){
  if(index==n){
        cout<<index<<" : ";
    for(auto it:temp)cout<<it<<" ";
  cout<<endl;
    ans.push_back(temp);
    return;
  }
  cout<<"Before First  function:"<<index<<endl;
  Subsequence(arr,index+1,n,temp,ans);
  cout<<"After First function :"<<index<<endl;
  temp.push_back(arr[index]);
  cout<<"Before Second  function:"<<index<<endl;
  Subsequence(arr,index+1,n,temp,ans);
  cout<<"After Second  function:"<<index<<endl;
  temp.pop_back();
  cout<<"After pop function:"<<index<<endl;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>temp;
    vector<vector<int>>ans;
    int index=0;
    Subsequence(arr,index,n,temp,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}
