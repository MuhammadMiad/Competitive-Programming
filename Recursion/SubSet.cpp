#include<bits/stdc++.h>
using namespace std;
void SubSet(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>&temp){
  if(index==n){
    ans.push_back(temp);
    return;
  }

  SubSet(arr,index+1,n,ans,temp);
  temp.push_back(arr[index]);
  SubSet(arr,index+1,n,ans,temp);
  ///if temp er age and sign  dei tahle eta dite hobe.na dile dite hobe na.
  temp.pop_back();
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    vector<vector<int>>ans;
    vector<int>temp;
    SubSet(arr,0,n,ans,temp);
    //sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
