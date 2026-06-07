#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]==0)l++;
        if(arr[h]==1)h--;
        if(arr[l]==1 and arr[h]==0){
            swap(arr[l],arr[h]);
            l++,h--;
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;

return 0;
}
