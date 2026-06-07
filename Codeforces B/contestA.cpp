#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,l,ans;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>k>>l;

if(k==0&&l==0){
    arr[0]=0;
}
else{
    ans=floor(l/2)+(l%2)+floor(k/15);
    arr[i]=ans;
}




}
 for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
 }


return 0;
}
