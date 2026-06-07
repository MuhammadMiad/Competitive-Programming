#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
int pre[n][n];
memset(pre,0,sizeof(pre));
pre[0][0]=arr[0][0];
for(int i=1;i<n;i++)pre[i][0]=pre[i-1][0]+arr[i][0];

for(int i=1;i<n;i++)pre[0][i]=pre[0][i-1]+arr[0][i];

for(int i=1;i<n;i++)
for(int j=1;j<n;j++)
    pre[i][j]=pre[i][j-1]+pre[i-1][j]+arr[i][j]-pre[i-1][j-1];


cout<<endl<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<pre[i][j]<< "  ";
    }
    cout<<endl;
}

return 0;
}
