#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[4][4]={3,6,4,2,7,8,11,5,9,3,12,1,17,8,5,9};
vector<int>v;
for(int i=0;i<4;i++){
    if(i%2==0){
        for(int j=0;j<4;j++){
             v.push_back(arr[i][j]);
        }
    }
    else{
        for(int j=3;j>=0;j--){
            v.push_back(arr[i][j]);
        }
    }
}
for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
return 0;
}
