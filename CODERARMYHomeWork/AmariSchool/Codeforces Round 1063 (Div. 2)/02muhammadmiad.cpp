#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  int t;cin>>t;while(t--){
       ll n;
       cin>>n;
       vector<ll>arr(n);
       for(int i=0;i<n;i++)cin>>arr[i];
       ll negone=count(begin(arr),end(arr),-1);
       if(negone==n){
        cout<<0<<endl;
        for(int i=0;i<n;i++)cout<<0<<" ";
        cout<<endl;
        continue;
       }
       if(negone==0){
        ll ans=0;
        for(int i=0;i<n-1;i++){
            ans+=arr[i+1]-arr[i];
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
        continue;
       }
       ll ans=0;
       if(arr[0]==-1){
        ll val,i;
        for(i=0;i<n;i++){
            if(arr[i]!=-1){
                val=arr[i];
                break;
            }
        }
        if(i==1){
            arr[0]=0;
        }
        else for(int j=0;j<i;j++)arr[j]=val;


        for(int i=1;i<n;i++){
           if(arr[i]==-1 and i==1) {
             arr[i]=0;
             ans+=arr[i]-arr[i-1];
           }
           else if(arr[i]==-1){
             if(ans>0)arr[i]=0;
             else if(ans==0)arr[i]=arr[i-1];
             else {
                ll st=ans;
                st=-st;
                st+=arr[i-1];
                arr[i]=st;
             }
           }

           ans+=arr[i]-arr[i-1];
        }
       }
       else{
        for(int i=1;i<n;i++){
           if(arr[i]==-1 and i==1) {
             arr[i]=0;
           }
           else if(arr[i]==-1){
             if(ans>0)arr[i]=0;
             else if(ans==0)arr[i]=arr[i-1];
             else {
                ll st=ans;
                st=-st;
                st+=arr[i-1];
                arr[i]=st;
             }
           }

           ans+=arr[i]-arr[i-1];
        }
       }
        cout<<abs(ans)<<endl;
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;

  }
return 0;
}
