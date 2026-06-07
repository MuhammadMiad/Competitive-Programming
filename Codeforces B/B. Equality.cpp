#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[]={-7,-3,-1,1,3,7};
int ar[n];
for(int i=0;i<n;i++){
    cin>>ar[i];
}
int co=0;
for(int i=0;i<n;i++){
    if(ar[i]!=0)co++;
}
cout<<co<<endl;
return 0;
}
