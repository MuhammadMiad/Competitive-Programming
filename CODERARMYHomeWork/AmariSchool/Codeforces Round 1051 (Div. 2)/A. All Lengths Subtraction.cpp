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
        if(n==1 and arr[0]!=1){
            cout<<"NO"<<endl;
            continue;
        }
        if(is_sorted(begin(arr),end(arr))){
            cout<<"YES"<<endl;
            continue;
        }

        int mxindex=max_element(begin(arr),end(arr))-begin(arr);

        if(arr[0]==arr[mxindex]){
            int flag=0;
            for(int i=0;i<n-1;i++){
                if(arr[i]<arr[i+1]){
                    flag=1;
                    break;
                }
            }
          if(flag)cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
          continue;
        }
        if(arr[mxindex]!=arr[n-1]){
                int flag=0;
            for(int i=mxindex;i>0;i--){
                if(arr[i]<arr[i-1]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
             for(int i=mxindex;i<n-1;i++){
                if(arr[i]<arr[i+1]){
                    flag=1;
                    break;
                }
            }
            }
         if(flag)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
         continue;

        }
        cout<<"NO"<<endl;
    }
return 0;
}
