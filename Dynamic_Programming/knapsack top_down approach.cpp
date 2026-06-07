#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int w, int n){
int Total[n+1][w+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=w;j++){
        if(i==0||j==0)Total[i][j]=0;
        else if(wt[i-1]<=j){
            Total[i][j]=max(val[i-1]+Total[i-1][j-wt[i-1]],Total[i-1][j]);
        }
        else Total[i][j]=Total[i-1][j];
    }

}
return Total[n][w];
}
int main(){
 int profit[]={4,3,6,5};
 int weight[]={3,2,5,4};
 int W=5;
 int n=sizeof(profit)/sizeof(profit[0]);
 cout<<knapsack(weight,profit,W,n)<<endl;

return 0;
}
