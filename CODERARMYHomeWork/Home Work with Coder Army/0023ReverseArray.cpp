#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int first=0;
int second=n-1;
while(first<second){
    swap(arr[first],arr[second]);
    first++,second--;
}
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
cout<<endl;

return 0;
}
