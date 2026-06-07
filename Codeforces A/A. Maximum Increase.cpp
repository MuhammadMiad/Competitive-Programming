#include<bits/stdc++.h>
using namespace std;
int main(){
int  n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int co=0,c=0,Max=0;
for(int i=0;i<n;i++){

     if(arr[i-1]<arr[i]){
        co++;

    }
    else if(arr[i-1]>arr[i]){
        co=1;
    }
    else if(arr[i-1]==arr[i]){
        co=1;
        c++;
    }
    if(Max<co){
        Max=co;
    }
}

if(Max==1)
    cout<<Max<<endl;
else if(Max>1)
cout<<Max<<endl;

else if(Max==0)
    cout<<Max<<endl;

return 0;
}
