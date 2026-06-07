#include<bits/stdc++.h>
using namespace std;

void  matrixMultiplication(int arr[],int n,vector<vector<int>>&dp)
{
     for(int i=n-1;i>0;i--)
    {
        for(int j=i+1;j<n;j++)
        {
            // Step 3: Copy the recursion
            int mini = 1e9;
            for(int k=i; k<j; k++)
            {
                int steps = arr[i - 1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j];
                mini = min(mini, steps);
            }
            dp[i][j] = mini;
        }
    }
}

int main()
{
    int arr[]= {30,35,15,5,10,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>dp(n,vector<int>(n,0));


    matrixMultiplication(arr,n,dp);



    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            cout<<dp[i][j]<<"    ";
        }
        cout<<endl;
    }

    return 0;
}
