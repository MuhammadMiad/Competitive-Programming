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


      if(is_sorted(begin(arr),end(arr))){
        cout<<"YES"<<endl;
      }
      else if(arr[0]>arr[1]){
        cout<<"NO"<<endl;
      }
      else{
        while(1){
            int flag=0;
          for(int i=1;i<n-1;i++){

            if(arr[i-1]<arr[i]and arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                flag=1;
            }
        }
        if(arr[0]>arr[1]||(flag==0 and is_sorted(begin(arr),end(arr))==0)){
            cout<<"NO"<<endl;
            break;
        }
        if(is_sorted(begin(arr),end(arr))){
            cout<<"YES"<<endl;
            break;
        }
        }

      }


    }

return 0;
}
