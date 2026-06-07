/*
1 0 0 0
1 1 0 1
1 1 1 1
1 1 1 1

*/
#include<bits/stdc++.h>
using namespace std;
int row[]={-1,1,0,0};
int col[]={0,0,-1,1};

bool valid(int i,int j,int n){
 return i>=0&&j>=0&&j<n&&i<n;
}

string ss="UDLR";

void totalpath(vector<vector<int>>&matrix,int i,int j,int n,string &path,vector<string>&ans,vector<vector<bool>>&visited){
if(i==n-1&&j==n-1){
    ans.push_back(path);
    return;
}
visited[i][j]=1;
//for(int k=0;k<4;k++){
//    if(valid(i+row[k],j+col[k],n)&&matrix[i+row[k]][j+col[k]]==1&&visited[i+row[k]][j+col[k]]==0){
//        path.push_back(ss[k]);
//        Totalpath(matrix,i+row[k],j+col[k],n,path,ans,visited);
//        path.pop_back();
//    }
//}
//visited[i][j]=0;


     if(valid(i-1,j,n)&&matrix[i-1][j]==1&&visited[i-1][j]==0){
        path.push_back('U');
        totalpath(matrix,i-1,j,n,path,ans,visited);
        path.pop_back();
     }

     if(valid(i,j+1,n)&&matrix[i][j+1]==1&&visited[i][j+1]==0){
         path.push_back('R');
        totalpath(matrix,i,j+1,n,path,ans,visited);
         path.pop_back();
     }

     if(valid(i+1,j,n)&&matrix[i+1][j]==1&&visited[i+1][j]==0){
        path.push_back('D');
        totalpath(matrix,i+1,j,n,path,ans,visited);
        path.pop_back();
     }

     if(valid(i,j-1,n)&&matrix[i][j-1]==1&&visited[i][j-1]==0){
         path.push_back('L');
         totalpath(matrix,i,j-1,n,path,ans,visited);
         path.pop_back();
     }

     visited[i][j]=0;
}

int main(){
 cout<<"Enter value in Matrix:4*4(1,0)"<<endl;
 vector<vector<int>>matrix(4,vector<int>(4));
 for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
       cin>>matrix[i][j];
    }
 }

vector<string>ans;
string path;
vector<vector<bool>>visited(4,vector<bool>(4,0));
int i=0,j=0,n=4;

if(matrix[0][0]==0||matrix[n-1][n-1]==0){
    cout<<"NOt possible"<<endl;
    return 0;
}

totalpath(matrix,i,j,n,path,ans,visited);

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}
return 0;
}
