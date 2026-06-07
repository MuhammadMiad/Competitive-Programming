#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
         int mx=INT_MIN;
         int pre=0;
        for(int j=0;j<n;j++){
         pre+=arr[j];
         mx=max(mx,pre);
         if(pre<0)pre=0;
        }

  cout<<mx<<endl;

return 0;
}
