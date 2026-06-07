#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++){
        arr[i]=i+1;
   }

   if(n%2==1){
    cout<<"-1"<<endl;
   }
   else{
    for(int i=0;i<n;i+=2){

       swap(arr[i],arr[i+1]);
   }

   for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
   }
   }

return 0;
}
