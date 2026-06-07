#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long int n;
        cin>>n;
        vector<long long int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        long long int one=0,cnt=0,sum=0,c=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]==1)one++;
            if(arr[i]%2)cnt++;
            c++;
            if(arr[i]%2)sum+=arr[i]+1;
            else sum+=arr[i];
        }
        if(one==c){
            cout<<-1<<endl;
            continue;
        }
        if(cnt==1 and cnt==c)cout<<-1<<endl;
        else cout<<sum/2<<endl;
    }

return 0;
}
