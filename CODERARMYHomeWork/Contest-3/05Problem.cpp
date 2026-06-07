#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n),arr1(n),arr2(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
       arr1[i]=arr[i];
       arr2[i]=arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
     if(i%2==0){
        if(arr1[i]<0){
            arr1[i]=arr1[i]*(-1);
            cnt++;
        }

     }
     else{
        if(arr1[i]>0){
            arr1[i]=arr1[i]*(-1);
            cnt++;
        }

     }

    }

    int cnt1=0;
    for(int i=0;i<n;i++){
     if(i%2==0){
        if(arr2[i]>0){
            arr2[i]=arr2[i]*(-1);
            cnt1++;
        }

     }
     else{
        if(arr2[i]<0){
            arr2[i]=arr2[i]*(-1);
            cnt1++;
        }

     }

    }

    cout<<min(cnt,cnt1)<<endl;


return 0;
}
