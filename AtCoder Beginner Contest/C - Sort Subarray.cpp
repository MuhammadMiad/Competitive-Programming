#include<bits/stdc++.h>
using namespace std;
int main(){
            int n,k;
            cin>>n>>k;
            vector<int>arr(n+1),brr(n+1);
            for(int i=1;i<=n;i++)cin>>arr[i];
           brr=arr;

           sort(begin(brr),end(brr));

           int ind=n-k+1;
           int i;
           for(i=1;i<=ind;i++){
             if(arr[i]!=brr[i])break;
           }
            int st;

           if(i<=ind){
            st=i+k-1;
           }
           int flag=0;
           for(int j=st+1;j<=n;j++){
               if(arr[j]!=brr[j]){
                flag=1;
                break;
               }
           }
           if(!flag)cout<<"Yes"<<endl;
           else cout<<"No"<<endl;

return 0;
}
