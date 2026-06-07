#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int firstMx=-1;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>firstMx)firstMx=arr[i];
}
int secondMx=-1;
for(int i=0;i<n;i++){
    if(arr[i]!=firstMx){
        if(arr[i]>secondMx)secondMx=arr[i];
    }
}

cout<<"Second Maximum Value:"<<secondMx<<endl;
return 0;
}
