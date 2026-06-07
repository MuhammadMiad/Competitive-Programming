#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,co=0;
    cin>>m>>n;
    char arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y'){
                co++;
            }
        }
    }

    if(co>0){
        cout<<"#Color"<<endl;
    }
    else
        cout<<"#Black&White"<<endl;



return 0;
}
