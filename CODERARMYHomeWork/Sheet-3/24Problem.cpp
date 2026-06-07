#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    int r=INT_MAX,c=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='.'){
                r=i;
                c=j;
            }
        }
    }
    int x,y;
    cin>>x>>y;
    if(r!=INT_MAX and c!=INT_MAX){
    if(r==0||r==n-1||c==0||c==m-1)cout<<"no"<<endl;
    else cout<<"yes"<<endl;
    }
    else cout<<"yes"<<endl;





return 0;
}
