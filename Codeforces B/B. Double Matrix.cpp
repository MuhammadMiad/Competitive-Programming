#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<2*n;i++){
        for(int j=0;j<m;j++){
           cin>>arr[i][j];
        }
    }
    int co=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

           if((arr[i][j]>=arr[i+1][j] or arr[i][j]>=arr[i][j+1])&&(i!=n-1 and j!=m-1))co++;
           if((arr[n+i][j]>=arr[n+i+1][j] or arr[n+i][j]>=arr[n+i][j+1])&&(i!=n-1 and j!=m-1))co++;

        }
    }
    cout<<co<<endl;

return 0;
}
