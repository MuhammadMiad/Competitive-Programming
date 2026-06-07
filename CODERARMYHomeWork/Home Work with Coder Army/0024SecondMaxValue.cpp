#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(mx<arr[i])mx=arr[i];
    }
    int mx2=INT_MIN;
    for(int i=0;i<n;i++){
        if(mx2<arr[i]&&arr[i]!=mx)mx2=arr[i];
    }
    cout<<"First Maximum Value:"<<mx<<endl;
    cout<<"Second Maximum Value:"<<mx2<<endl;

return 0;
}
