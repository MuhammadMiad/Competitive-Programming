#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)cin>>arr[i];

   int currmx=1;
   int prevmx=0;
   int mx=0;
   for(int i=0;i<n-1;i++){
     if(arr[i]<arr[i+1]){
        currmx++;
     }
     else{
        prevmx=currmx;
        currmx=1;
     }

     mx=max(mx,currmx/2);
     mx=max(mx,min(prevmx,currmx));
   }
   cout<<mx<<endl;
return 0;
}
