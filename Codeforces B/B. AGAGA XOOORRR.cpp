#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+3];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int pre[n+3];
        pre[0]=0;
        for(int i=1;i<=n;i++)  pre[i]=pre[i-1]^arr[i];

        int ans=0;
        for(int i=1;i<n;i++){
            int a=pre[i];
            int b=pre[n]^pre[i];
            if(a==b) ans=1; break;
        }
        for(int i=1;i<n;i++){
            int a=pre[i];
            for(int j=i+1;j<n;j++){

                int b=pre[j]^pre[i];
                int c=pre[n]^pre[j];
                if(a==b&&b==c) ans=1;break;
            }
        }
        if(ans==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }
return 0;
}
