#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int t2=count(begin(arr),end(arr),2);
        if(t2%2==1){
            cout<<-1<<endl;
            continue;
        }
        if(t2==0){
            cout<<1<<endl;
            continue;
        }

        int ans=-2,t1=0;
        for(int i=0;i<n;i++){
            t1+=(arr[i]==2);
            if(2*t1==t2){
                ans=i;
                break;
            }
        }
        cout<<ans+1<<endl;

    }

return 0;
}
