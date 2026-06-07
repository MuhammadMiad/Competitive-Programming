#include<bits/stdc++.h>
using namespace std;
void Subsequence(int arr[],int index,int n,vector<int>temp,vector<vector<int>>&ans)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    ///Not included
    Subsequence(arr,index+1,n,temp,ans);
    ///included
    temp.push_back(arr[index]);
    Subsequence(arr,index+1,n,temp,ans);
    ///temp.pop_back();
}
int main()
{
    int arr[]= {1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>ans;
    vector<int>temp;
    int  index=0;
    Subsequence(arr,index,n,temp,ans);
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
