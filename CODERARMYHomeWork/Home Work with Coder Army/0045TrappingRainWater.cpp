#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int>leftmax(n),rightmax(n);
    leftmax[0]=arr[0];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],arr[i]);
    }
    rightmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],arr[i]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        water+=min(leftmax[i],rightmax[i])-arr[i];
    }
    cout<<water<<endl;

return 0;
}
