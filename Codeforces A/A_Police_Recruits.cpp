#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,hired=0,untreated=0;
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>k;
        arr[i]=k;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            hired+=arr[i];
        }
        else if(arr[i]<0&&hired>0){
            hired--;
        }
        else if(arr[i]<0){
            untreated++;
        }
    }
    cout<<untreated<<endl;


return 0;
}
