#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int i,int j,vector<vector<int>>&dp){
        if(i>=j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int Min=INT_MAX;
        for(int k=i;k<=j-1;k++){
            int temp=solve(arr,i,k,dp)+solve(arr,k+1,j,dp)+arr[i-1]*arr[k]*arr[j];
            Min=min(Min,temp);
        }
        return dp[i][j]=Min;
    }
int main()
{
    vector<int>arr{30,35,15,5,10,20,25};
    int n=7;
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    solve(arr,1,n-1,dp);
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            cout<<dp[i][j]<<"    ";
        }
        cout<<endl;
    }

    return 0;
}

