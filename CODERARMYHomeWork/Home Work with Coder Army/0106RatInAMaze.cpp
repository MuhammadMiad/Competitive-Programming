#include<bits/stdc++.h>
using namespace std;
int valid(int i,int j,int n){
   return i>=0&&j>=0&&i<n&&j<n;
}
void TotalPath(vector<vector<int>>&Mat,int i,int j,int n,string &path,vector<string>&ans,vector<vector<bool>>&visited)
{
    if(i==n-1 and j==n-1)
    {
        ans.push_back(path);
        return;
    }
    visited[i][j]=1;
    if(valid(i-1,j,n) and Mat[i-1][j] and !visited[i-1][j])
    {
        path.push_back('U');
        TotalPath(Mat,i-1,j,n,path,ans,visited);
        path.pop_back();

    }
     if(valid(i+1,j,n) and Mat[i+1][j] and !visited[i+1][j])
    {
        path.push_back('D');
        TotalPath(Mat,i+1,j,n,path,ans,visited);
        path.pop_back();

    }
    if(valid(i,j-1,n) and Mat[i][j-1] and !visited[i][j-1])
    {
        path.push_back('L');
        TotalPath(Mat,i,j-1,n,path,ans,visited);
        path.pop_back();

    }
    if(valid(i,j+1,n) and Mat[i][j+1] and !visited[i][j+1])
    {
        path.push_back('R');
        TotalPath(Mat,i,j+1,n,path,ans,visited);
        path.pop_back();

    }
    visited[i][j]=0;

}
    int main()
    {
        int n;
        cin>>n;
        vector<vector<int>>Mat(n,vector<int>(n));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)cin>>Mat[i][j];
        vector<vector<bool>>Visited(n,vector<bool>(n,0));
        vector<string>ans;
        string path;
         if(Mat[0][0]==0||Mat[n-1][n-1]==0){
            cout<<0<<endl;
            return 0;
         }
        TotalPath(Mat,0,0,n,path,ans,Visited);
        for(auto it:ans)cout<<it<<endl;

        return 0;
    }
