#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++)cin>>arr[i];
 for(int i=0;i<n-1;i++){
    int dif=abs(arr[i]-arr[i+1]);
    if(dif>1 and arr[i]<arr[i+1]){
        int val=arr[i];
       for(int i=0;i<dif;i++){
          cout<<val++<<" ";
       }
    }
    else if(dif>1 and arr[i]>arr[i+1]){
       int val=arr[i];
    for(int i=0;i<dif;i++){
        cout<<val--<<" ";
    }
    }
    else cout<<arr[i]<<" ";
 }
 cout<<arr[n-1]<<endl;

return 0;
}
