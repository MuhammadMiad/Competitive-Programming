#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,k;
cin>>n;
int arr[n];
for(int i=1;i<=n;i++){
        cin>>k;
       arr[k]=i;
}
for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
