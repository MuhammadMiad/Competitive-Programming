#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int  flag=0;
        for(int i=1;i<=n;i++){
            if(abs(arr[i]-i)>1){
                flag=1;
                break;
            }

        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }


return 0;
}
