///Approach-2

#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={3,2,5,3,1,2,3,7};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)arr[i]--;

for(int i=0;i<n;i++){
    arr[arr[i]%n]+=n;
}

for(int i=0;i<n;i++){
   cout<<i+1<<" ->"<<arr[i]/n<<endl;
}
return 0;
}

