#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<vector<int>>arr(6,vector<int>(6));
   for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        cin>>arr[i][j];
    }
   }
   int mx=-1e9;
   for(int i=1;i<5;i++){
    for(int j=1;j<5;j++){
      int sum=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i][j]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
      mx=max(mx,sum);
    }
   }
   cout<<mx<<endl;


return 0;
}
