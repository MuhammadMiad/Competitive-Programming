#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int cnt=0;
        for(int i=1;i<n-1;i++){
            if(arr[i-1]<arr[i] and arr[i]>arr[i+1]){
                    cnt++;
                if(arr[i]<arr[i+2] and i+2<n)arr[i+1]=arr[i+2];
                else arr[i+1]=arr[i];
            }
        }
        cout<<cnt<<endl;
        for(auto it:arr)cout<<it<<" ";
        cout<<endl;
    }


return 0;
}
