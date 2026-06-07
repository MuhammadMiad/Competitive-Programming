#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
vector<vector<int>>v(m,vector<int>(n));
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
    }
}
int target;
cin>>target;
int left=0;
int right=n-1;
while(left<=right&&right>=0){
    if(v[left][right]==target){
        cout<<"Value is Found"<<endl;
        return 0;
    }
    else if(v[left][right]>target)right--;
    else left++;
}
cout<<"Value is not Found"<<endl;
return 0;
}
