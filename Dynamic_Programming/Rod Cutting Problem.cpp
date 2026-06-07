#include<bits/stdc++.h>
using namespace std;
int  RodCutting(int price[],int len[],int n)
{
    int mat[n+1][n+1];
    for(int i=0; i<=n; i++)mat[i][0]=0;
    for(int i=1; i<=n; i++)mat[0][i]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(len[i-1]>j)mat[i][j]=mat[i-1][j];
            else mat[i][j]=max(price[i-1]+mat[i][j-len[i-1]],mat[i-1][j]);

        }
    }

 /**Write to be better understand**/
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            cout<<mat[i][j]<<"   ";
        }
        cout<<endl;
    }
    return mat[n][n];
}
int main()
{
    int price[]= { 1, 5, 8, 9, 10, 17, 17, 20 };
    int n=sizeof(price)/sizeof(price[0]);
    int wt[n];
    for(int i=0;i<n;i++)wt[i]=i+1;
    int ans=RodCutting(price,wt,n);
    cout<<ans<<endl;

    return 0;
}
