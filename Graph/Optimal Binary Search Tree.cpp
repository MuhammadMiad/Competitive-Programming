#include<bits/stdc++.h>
using namespace std;
void OBST(int arr[],int key[],int n,vector<vector<int>>&dp,vector<vector<int>>&mink){
for(int i=0;i<=n;i++)dp[i][i]=0;

for(int i=n;i>=0;i--){
    for(int j=i+1;j<=n;j++){
        int mn=INT_MAX;
        int s;
        for(int k=i+1;k<=j;k++){
           int temp=dp[i][k-1]+dp[k][j];
           if(mn>temp){
             mn=temp;
             s=k;
           }
        }
        int sum=0;
        for(int c=i;c<j;c++)sum+=key[c];
        dp[i][j]=mn+sum;
        mink[i][j]=s;
    }
}


}
int main(){
int arr[]={10,20,30,40};
int key[]={4,1,3,2};

int n=sizeof(arr)/sizeof(arr[0]);

vector<vector<int>>dp(n+1,vector<int>(n+1));
vector<vector<int>>mink(n+1,vector<int>(n+1));

OBST(arr,key,n,dp,mink);
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(j>i)cout<<dp[i][j]<<"     ";
        else cout<<"      ";
    }
    cout<<endl;
}
cout<<endl<<endl;
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(j>i)cout<<mink[i][j]<<" ";
        else cout<<"  ";
    }
    cout<<endl;
}


return 0;
}


/** My approach,much critical that up to bottom of diagonal <<<<


#include<bits/stdc++.h>
using namespace std;
void OBST(int arr[],int key[],int n,vector<vector<int>>&dp,vector<vector<int>>&mink){
for(int i=0;i<=n;i++)dp[i][i]=0;
int cnt=0;
for(int i=0;i<n;i++){
        cnt++;
    for(int j=0;j<=n-cnt;j++){
        int mn=INT_MAX;
        int s;
        for(int k=j+1;k<=j+cnt;k++){
           int temp=dp[j][k-1]+dp[k][j+cnt];
           if(mn>temp){
             mn=temp;
             s=k;
           }
        }
        int sum=0;
        for(int c=j;c<j+cnt;c++)sum+=key[c];
        dp[j][j+cnt]=mn+sum;
        mink[j][j+cnt]=s;
    }
}


}
int main(){
int arr[]={10,20,30,40};
int key[]={4,1,3,2};

int n=sizeof(arr)/sizeof(arr[0]);

vector<vector<int>>dp(n+1,vector<int>(n+1));
vector<vector<int>>mink(n+1,vector<int>(n+1));

OBST(arr,key,n,dp,mink);
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(j>i)cout<<dp[i][j]<<"     ";
        else cout<<"      ";
    }
    cout<<endl;
}
cout<<endl<<endl;
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(j>i)cout<<mink[i][j]<<" ";
        else cout<<"  ";
    }
    cout<<endl;
}


return 0;
}
**/
