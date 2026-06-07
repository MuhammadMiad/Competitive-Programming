#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,d=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int high=n-1;
    int low=0;
    int m=n;
    int c=0;
    while(m!=0){
            if(c%2==0){
                if(arr[low]>arr[high]){
                    s+=arr[low];
                    low++;
                }
                else{
                    s+=arr[high];
                    high--;
                }
            }
            else{
                 if(arr[low]>arr[high]){
                    d+=arr[low];
                    low++;
                }
                else{
                    d+=arr[high];
                    high--;
                }
            }
        m--;
        c++;
    }

    cout<<s<<" "<<d<<endl;
return 0;
}
