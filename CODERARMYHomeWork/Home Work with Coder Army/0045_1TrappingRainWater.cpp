#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int leftmax=0,rightmax=0,Maxvalue=INT_MIN,index,water=0;
    for(int i=0;i<n;i++){
        if(Maxvalue<arr[i]){
            Maxvalue=arr[i];
            index=i;
        }
    }

    for(int i=0;i<index;i++){
        if(leftmax>arr[i]){
            water+=leftmax-arr[i];
        }
        else leftmax=arr[i];
    }

    for(int i=n-1;i>=index;i--){
        if(rightmax>arr[i]){
            water+=rightmax-arr[i];
        }else rightmax=arr[i];
    }
    cout<<water<<endl;

return 0;
}
