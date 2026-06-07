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
    ///left side
    for(int i=0;i<n;i++){
        int index1=i;
        int index2=0;
        vector<int>v;
        while(index1<n){
            v.push_back(arr[index1][index2]);
            index1++;
            index2++;
        }
        sort(begin(v),end(v));
        index1=i;
        index2=0;
        int inx=0;
        while(index1<n){
            arr[index1][index2]=v[inx++];
            index1++;
            index2++;
        }
    }

    ///right side
    for(int i=1;i<m;i++){
        int index1=0;
        int index2=i;
        vector<int>v;
        while(index2<m){
            v.push_back(arr[index1][index2]);
            index1++;
            index2++;
        }
        sort(begin(v),end(v));
        index1=0;
        index2=i;
        int inx=0;
        while(index2<m){
            arr[index1][index2]=v[inx++];
            index1++;
            index2++;
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}
