#include<bits/stdc++.h>
using namespace std;
int main(){
    int  a,b;
    cin>>a>>b;
     int  arr[a];
    for(int i=0;i<a;i++)cin>>arr[i];
    sort(arr,arr+a);
    long long sum=0;
    for(int i=a-1;i>=a-b;i--){
        if(arr[i]<0)continue;
        sum+=arr[i];
    }
    cout<<sum<<endl;
return 0;
}
