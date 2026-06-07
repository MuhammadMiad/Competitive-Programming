#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int l=1;
    int r=n-1;
    int sum=arr[0],sum1=0;
    while(l<=r){
       if(sum<sum1)sum+=arr[l++];
       else if(sum>sum1)sum1+=arr[r--];
    }
    if(sum==sum1)cout<<"Present equal sub array"<<endl;
    else  cout<<"Not present Equal sub array"<<endl;

return 0;
}
