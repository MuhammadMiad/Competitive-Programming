#include<bits/stdc++.h>
using namespace  std;
int subarraysDivByK(int arr[], int k,int n){
        int totalsum=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];

                if(sum%k==0){
                totalsum++;
                }
            }
        }
        return totalsum;
    }
int main(){
int arr[]={3,5,6,3,9,4,6,9};
int n=sizeof(arr)/sizeof(arr[0]);
int k=7;
int totalsum=subarraysDivByK(arr,k,n);
cout<<totalsum<<endl;
return 0;
}
