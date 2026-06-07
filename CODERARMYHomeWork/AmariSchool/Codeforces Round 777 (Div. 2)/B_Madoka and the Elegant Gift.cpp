#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
       string arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       int flag=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        /**
        01
        11
        **/
        if(arr[i][j]=='0' and j+1<m and i+1<n and arr[i][j+1]=='1' and arr[i+1][j]=='1' and  arr[i+1][j+1]=='1')flag=1;
        /**
        11
        01
        **/
        if(arr[i][j]=='0' and  i-1>=0 and j+1<m and arr[i-1][j]=='1' and arr[i][j+1]=='1' and arr[i-1][j+1]=='1')flag=1;

        /**
        11
        10
        **/
        if(arr[i][j]=='0' and  j-1>=0 and i-1>=0  and arr[i][j-1]=='1' and  arr[i-1][j]=='1' and arr[i-1][j-1]=='1')flag=1;
        /**
        10
        11
        **/
        if(arr[i][j]=='0' and j-1>=0 and i+1<n and arr[i][j-1]=='1' and arr[i+1][j]=='1' and arr[i+1][j-1]=='1')flag=1;


        }

       }
      if(flag)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;

    }
return 0;
}
