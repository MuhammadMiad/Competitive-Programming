#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n][n];
memset(arr,0,sizeof(arr));
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0){
                arr[i][j]=1;
            }
        }
}
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        int x=arr[i-1][j]+arr[i][j-1];
        arr[i][j]=x;
    }
}
cout<<arr[n-1][n-1]<<endl;
return 0;
}
