#include<bits/stdc++.h>
using namespace std;
void MatrixMul(vector<vector<int>>&Mat1,vector<vector<int>>&Mat2)
{
    int n=Mat1.size();
    vector<vector<int>>Result(n,vector<int>(n,0));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                Result[i][j]+=Mat1[i][k]*Mat2[k][j];


    Mat1=Result;

}
void PowerFun(vector<vector<int>>&mat,int power,vector<vector<int>>&Iden)
{
    int n=mat.size();
    while(power)
    {
        if(power%2)
        {
            MatrixMul(Iden,mat);
            power--;
        }
        else
        {
            MatrixMul(mat,mat);
            power/=2;
        }
    }

}
int main()
{
    int n,power;
    cin>>n>>power;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>mat[i][j];
    vector<vector<int>>Identity(n,vector<int>(n,0));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i==j)Identity[i][j]=1;


    PowerFun(mat,power,Identity);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<Identity[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
