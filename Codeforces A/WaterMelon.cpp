#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
        int sum=arr[i]+arr[l]+arr[r];
         auto it=find(begin(arr),end(arr),sum);
         int x=distance(arr.begin(), it);
         if(x<n){
            cout<<"YES"<<endl;
            return 0;
         }
         if(l<r)l++;
         if(l<r)r--;
        }
    }
    cout<<"NO"<<endl;
}

return 0;
}
