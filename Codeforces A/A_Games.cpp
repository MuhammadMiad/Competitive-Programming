#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,cou=0;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        cin>>p>>q;
        arr[i]=p;
        arr1[i]=q;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr1[j]){
                cou++;
            }
        }
    }
    cout<<cou<<endl;


return 0;
}
