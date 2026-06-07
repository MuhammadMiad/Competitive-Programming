#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int sereja=0;
        int dima=0;
        int co=0;
        for(int i=n-1;i>=0;i--){
            co++;
            if(co%2==1) sereja+=arr[i];
            else dima+=arr[i];
        }
        cout<<sereja<< " "<<dima<<endl;





return 0;
}
