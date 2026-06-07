#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),temp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(begin(arr),end(arr));
        reverse(begin(arr),end(arr));
          int cnt=0;
        while(1){
            int flag=0;
          for(int i=0;i<n;i++){
            if(cnt!=arr[i] and arr[i]!=0){
                cnt+=arr[i];
                temp.push_back(arr[i]);
                 arr[i]=0;
                 flag=1;
            }
          }
          if(flag==0)break;
        }
        if(temp.size()==n){
            cout<<"YES"<<endl;
            for(auto it:temp)cout<<it<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;

    }


return 0;
}
