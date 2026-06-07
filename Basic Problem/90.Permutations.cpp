#include<bits/stdc++.h>
using namespace std;
void Permutation(int arr[],vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited){
    ///Base Condition
 if(visited.size()==temp.size()){
    ans.push_back(temp);
    return;
 }

for(int i=0;i<visited.size();i++){
    if(visited[i]==0){
        visited[i]=1;
        temp.push_back(arr[i]);
        Permutation(arr,ans,temp,visited);
        visited[i]=0;
        temp.pop_back();
    }
}
}
int main(){
int arr[]={1,2,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
 vector<vector<int>>ans;
 vector<int>temp;
 vector<bool>visited(n,0);
Permutation(arr,ans,temp,visited);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
