#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(is_sorted(begin(arr),end(arr))){
            cout<<0<<endl;
            continue;
        }
        if(arr[n-2]>arr[n-1] || arr[n-2]-arr[n-1]>arr[n-2] ||arr[n-2]-arr[n-1]>arr[n-1]){
            cout<<-1<<endl;
            continue;
        }

       cout<<n-3+1<<endl;
        for(int i=0;i<n-2;i++){
            cout<<i+1<<" "<<n-1<<" "<<n<<endl;
        }


    }

return 0;
}
