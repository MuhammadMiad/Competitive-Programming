#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[7];
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }
        int mx=arr[max_element(arr,arr+7)-arr];
        int sum=arr[0]+arr[1];
        for(int i=2;i<7;i++){
              if(sum+arr[i]==mx){
              cout<<arr[0]<<" "<<arr[1]<<" "<<arr[i]<<endl;
              break;
              }
        }





    }


return 0;
}
