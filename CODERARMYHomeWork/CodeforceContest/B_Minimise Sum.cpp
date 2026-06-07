#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        vector<long int>arr(n),a,b;
        for(int i=0;i<n;i++)cin>>arr[i];
        long long int Mn;
        a=arr;
        b=arr;
        if(n==2){
            cout<<arr[0]+min(arr[0],arr[1])<<endl;
            continue;
        }
        else{
            if(a[1]!=0){
                a[0]=a[0]+a[1];
                a[1]=0;
                Mn=a[0]+min(a[0],a[1]);
            }
            if(b[1]!=0){
                b[1]=b[1]+b[2];
                b[2]=0;
                long long mn=b[0]+min(b[0],b[1]);
                Mn=min(Mn,mn);

                cout<<Mn<<endl;
                continue;
            }

                cout<<arr[0]<<endl;


        }

    }

return 0;
}
