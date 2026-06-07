#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<abs(arr[0])<<endl;
        return 0;
    }
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<0<<endl;
            return 0;
        }
        mn=min(mn,abs(arr[i]));

    }

    cout<<mn<<endl;

return 0;
}
