#include<bits/stdc++.h>
using namespace std;
void Permutation(vector<int>&arr,int index,vector<vector<int>>&ans){
    ///Base Condition
 if(arr.size()==index){
    ans.push_back(arr);
    return;
 }
    vector<bool>use(21,0);
    for(int i=index;i<arr.size();i++){
        if(use[arr[i]+10]==0){
        swap(arr[i],arr[index]);
        Permutation(arr,index+1,ans);
        swap(arr[i],arr[index]);
        use[arr[i]+10]=1;
   }

}
}
int main(){
vector<int>arr={1,1,2,2};
 vector<vector<int>>ans;
 Permutation(arr,0,ans);
 for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}

