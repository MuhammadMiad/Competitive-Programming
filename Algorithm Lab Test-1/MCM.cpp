#include<bits/stdc++.h>
using namespace std;
int MinK[7][7];
void pop(int i,int j){
 ///if i==j print matrix
 if(i==j){
    cout<<"A"<<i;
 }
 else{
    cout<<"(";
    pop(i,MinK[i][j]);
    pop(MinK[i][j]+1,j);
    cout<<")";
 }
}
int main(){
    int arr[]={35,30,10,5,15,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    ///2D array declearation for Matrix
    int DP[n][n];

    ///At first ,if i==j then insert into dp 0
    for(int i=0;i<n;i++)DP[i][i]=0;

    for(int i=n-1;i>0;i--){
        for(int j=i+1;j<n;j++){
            int mn=INT_MAX;
            int s;
            for(int k=i;k<j;k++){
                int temp=DP[i][k]+DP[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(mn>temp){
                    mn=temp;
                    s=k;
                }
            }
            DP[i][j]=mn;
            MinK[i][j]=s;
        }
    }

    ///Print  DP matrix
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
                if(j>i)
                cout<<DP[i][j]<<"   ";
                else cout<<"       ";
        }
        cout<<endl;
    }
    ///Print  Mink matrix
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
                if(j>i)
                cout<<MinK[i][j]<<" ";
                else cout<<"  ";
        }
        cout<<endl;
    }

    ///call Print optimal Parentheses
     pop(1,n-1);
return 0;
}
