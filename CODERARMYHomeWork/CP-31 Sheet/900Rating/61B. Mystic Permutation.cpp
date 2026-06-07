#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),brr;
        queue<int>p;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        brr=arr;
        sort(begin(brr),end(brr));
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i])continue;
            if(n-1==i and arr[i]==brr[i]){
                swap(brr[n-1],brr[n-2]);
            }
            else if(arr[i]==brr[i]){
                swap(brr[i],brr[i+1]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<brr[i]<<" ";
        }
        cout<<endl;

    }


return 0;
}
