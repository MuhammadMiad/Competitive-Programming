#include<bits/stdc++.h>
using namespace std;
int main(){
int n,h,k,sum=0;
cin>>n>>h;
int arr[n];
for(int i=0;i<n;i++){
        cin>>k;
    if(k>h){
        arr[i]=2;
    }
    else
        arr[i]=1;
}

for(int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<sum<<endl;

 return 0;
}


