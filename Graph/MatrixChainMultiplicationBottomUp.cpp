#include<bits/stdc++.h>
using namespace std;
void MatrixChainMulti(int arr[],int n,vector<vector<int>>&dp,vector<vector<int>>&MinK){
for(int i=n-1;i>0;i--){
    for(int j=i+1;j<n;j++){
        int Min=1e9;
        int s;
        for(int k=i;k<j;k++){
            int temp=dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j];
            if(temp<Min){
                Min=temp;
                s=k;
            }
        }
        dp[i][j]=Min;
        MinK[i][j]=s;
    }
}
}

void  printOptimalPrenthesis(vector<vector<int>>&MinK,int i,int j){
    if(i==j)
        cout<<'A'<<i<<"";
    else{
        cout<<'(';
        printOptimalPrenthesis(MinK,i,MinK[i][j]);
        printOptimalPrenthesis(MinK,MinK[i][j]+1,j);
        cout<<')';
    }

}
int main(){
int arr[]={5,6,7,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
vector<vector<int>>dp(n,vector<int>(n));
vector<vector<int>>MinK(n,vector<int>(n));
MatrixChainMulti(arr, n,dp,MinK);

printOptimalPrenthesis(MinK,1,n-1);
cout<<"\n\n\n";

for(int i=1;i<dp.size();i++){
    for(int j=1;j<dp[i].size();j++){
            if(i<j)
        cout<<dp[i][j]<<"   ";
        else cout<<"      ";
    }
    cout<<endl;
}

cout<<"\n\n\n";
for(int i=1;i<MinK.size();i++){
    for(int j=1;j<MinK[i].size();j++){
        if(i<j)
        cout<<MinK[i][j]<<"   ";
    else cout<<"    ";
    }
    cout<<endl;
}
return 0;
}
