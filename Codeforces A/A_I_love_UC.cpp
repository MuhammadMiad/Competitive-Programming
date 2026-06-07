#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cou=0,mx,mn;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mn=arr[0];
    mx=arr[0];
    for(int i=0;i<n;i++){
            if(arr[i]<mn){
                mn=arr[i];
                cou++;
            }
         if(arr[i]>mx){
                mx=arr[i];
                cou++;
            }
        }


    cout<<cou<<endl;

return 0;
}
