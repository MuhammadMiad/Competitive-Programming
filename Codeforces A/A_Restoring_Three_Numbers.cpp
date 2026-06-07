#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
int arr[4];
for(int i=0;i<4;i++){
    cin>>arr[i];
}
sort(arr,arr+4);

a=arr[3]-arr[2];
b=arr[3]-arr[1];
c=arr[3]-arr[0];

cout<<a<< " "<< b<<" "<<c<<endl;

return 0;
}
