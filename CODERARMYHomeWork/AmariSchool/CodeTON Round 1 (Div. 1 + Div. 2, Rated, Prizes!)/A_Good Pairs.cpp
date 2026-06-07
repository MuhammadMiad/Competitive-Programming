#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        if(n==1){
            cout<<1<<" "<<1<<endl;
            continue;
        }
        int Mx=0,Mn=INT_MAX;
        int index1,index2;
        for(int i=0;i<n;i++){
            if(arr[i]>Mx){
                Mx=arr[i];
                index2=i;
            }
             if(arr[i]<Mn){
                Mn=arr[i];
                index1=i;
            }
        }

        cout<<index1+1<<" "<<index2+1<<endl;
    }


return 0;
}
