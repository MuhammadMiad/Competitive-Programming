#include<bits/stdc++.h>
using namespace std;
int RotateMatrix(vector<vector<int>>&arr,int n){
     vector<vector<int>>ans(n,vector<int>(n));
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-i-1]=arr[i][j];
        }
     }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=ans[i][j];
        }
     }


}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    int k;
    cout<<"Enter fequency of Rotate Matrix:"<<endl;
    cin>>k;
    int x=k%4;
    while(x--){
        RotateMatrix(arr,n);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }


return 0;
}
