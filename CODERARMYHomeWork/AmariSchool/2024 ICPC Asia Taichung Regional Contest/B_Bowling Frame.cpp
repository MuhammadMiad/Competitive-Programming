#include<bits/stdc++.h>
using namespace std;
int main(){
    long long arr[]= {1,3,6,12,24,48,96,192,384,768,1536,3072,6144,12288,24576,49152,98304,196608,393216,786432,1572864,3145728,6291456,12582912,25165824,50331648,100663296,201326592,402653184,805306368};
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long sum=a+b;
        long long l=0;
        long long r=29;
        int store;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(arr[mid]==sum){
                store=mid+1;
                break;
            }
            else if(arr[mid]>sum){
                store=mid;
                r=mid-1;
            }
            else{
                store=mid+1;
                l=mid+1;
            }
        }
        cout<<store<<endl;


    }

    return 0;
}
