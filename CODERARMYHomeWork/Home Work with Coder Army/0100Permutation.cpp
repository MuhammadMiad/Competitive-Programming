#include<bits/stdc++.h>
using namespace std;
void Permutation(vector<int>&arr,vector<int>&temp,vector<bool>&visited,vector<vector<int>>&ans){

  if(temp.size()==arr.size()){
    ans.push_back(temp);
    return;
  }
 for(int i=0;i<arr.size();i++){
    if(visited[i]==0){
        visited[i]=1;
        temp.push_back(arr[i]);
        Permutation(arr,temp,visited,ans);
        visited[i]=0;
        temp.pop_back();
    }
 }


}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>temp;
    vector<vector<int>>ans;
    vector<bool>visited(n,0);
    Permutation(arr,temp,visited,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}
