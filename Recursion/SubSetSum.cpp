#include<bits/stdc++.h>
using namespace std;
void SubSet(int arr[],int index,int n,vector<int>&ans,long long  sum){
  if(index==n){
    ans.push_back(sum);
    return;
  }
  SubSet(arr,index+1,n,ans,sum);
  sum+=arr[index];
  SubSet(arr,index+1,n,ans,sum);
}
int main(){
    int arr[]={5, 2, 3, 10, 6, 8};
    int n=6;
    vector<int>ans;
    long long sum=0;
    SubSet(arr,0,n,ans,sum);
    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }



return 0;
}

