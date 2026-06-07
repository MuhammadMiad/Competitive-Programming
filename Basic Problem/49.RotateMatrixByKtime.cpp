#include<bits/stdc++.h>
using namespace std;
void Rotated90(int arr[][4],int n){
    int arr2[n][n];
     for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
          arr2[i][n-j-1]=arr[j][i];
        }
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=arr2[i][j];
        }
     }

}
int main(){
int arr[4][4]={1, 2, 3, 4,
               5, 6, 7, 8,
               9,10,11,12,
               13,14,15,16
               };
int n=4;

cout<<" Before 0 time Rotated:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<< " ";
    }
    cout<<endl;
}
cout<<"Enter Rotated Times:"<<endl;
int k;
cin>>k;

k=k%4;
int s=k;
while(k){
    Rotated90(arr,n);
    k--;
}
cout<<" After "<<s<<" time Rotated:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<< " ";
    }
    cout<<endl;
}
return 0;
}
