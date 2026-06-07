#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int k;
    cout<<"Enter Searching Value:"<<endl;
    cin>>k;
    int left=0;
    int right=n*m-1;
    int i=-1,j=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        int row=mid/m;
        int col=mid%m;
        if(arr[row][col]==k){
            i=row;
            j=col;
            break;
        }
        else if(arr[row][col]>k)right=mid-1;
        else left=mid+1;
    }

    if(i!=-1&&j!=-1)cout<<"Present index "<<i<<" and "<<j<<" That value is:"<<arr[i][j]<<endl;
    else cout<<"This value isn't found"<<endl;


return 0;
}
