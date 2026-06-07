#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]==0){
        int l=0;
        int r=i-1;
        while(l<r){
            swap(arr[l],arr[r]);
            l++,r--;
        }
    }
}
for(auto it:arr)cout<<it<<" ";
cout<<endl;

return 0;
}
