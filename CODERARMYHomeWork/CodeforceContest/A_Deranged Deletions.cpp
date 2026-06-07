#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     vector<int>arr(n),ar;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
//     if(n==1){
//        cout<<"NO"<<endl;
//        continue;
//     }
//
//     ar=arr;
//     sort(begin(ar),end(ar));
//     int flag=0;
//     for(int i=0;i<n;i++){
//        if(arr[i]==ar[i])flag=1;
//     }
//     if(flag)cout<<"NO"<<endl;
//     else{
//        cout<<"YES"<<endl;
//        cout<<n<<endl;
//        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
//        cout<<endl;
//     }
      int flag=0,x,y;
      for(int i=0;i<n && !flag;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                x=i;
                y=j;
               flag=1;
                break;
            }
        }
      }
      if(flag){
        cout<<"YES"<<endl;
        cout<<2<<endl;
        cout<<arr[x]<<" "<<arr[y]<<endl;
      }
      else cout<<"NO"<<endl;

   }

return 0;
}

