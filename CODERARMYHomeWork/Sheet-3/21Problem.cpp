#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n),arr1(m);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>arr1[i];

    if(n>m){
            int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr1[j]){
              j++;
            }
        }
        if(j==m){
        cout<<"YES"<<endl;
        return 0;
        }
    }
    else{
       int j=0;
        for(int i=0;i<m;i++){
            if(arr[i]==arr1[j]){
              j++;
            }
        }
        if(j==n){
            cout<<"YES"<<endl;
        return 0;
        }

    }
    cout<<"NO"<<endl;


return 0;
}
