#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int cnt=0;
    sort(begin(arr),end(arr));
    int x=arr[n-1];
    int y;
    for(int i=n-2;i>=0;i--){
            y=x-arr[i];
        if(arr[i]==0){
            cnt++;
            break;
        }
        if(arr[i]<=x and y!=0){
             x=arr[i];
        }
        else{
            x=arr[i-1];
            i--;
            cnt++;
        }
    }
    cout<<cnt<<endl;


return 0;
}
