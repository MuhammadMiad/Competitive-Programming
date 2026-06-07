#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        if(!is_sorted(begin(arr),end(arr)))cout<<0<<endl;
        else{
            int index;
            int mn=INT_MAX;
            for(int i=0;i<n-1;i++){
                if(arr[i+1]-arr[i]<mn){
                    mn=arr[i+1]-arr[i];
                    index=i;
                }
            }
            if(mn==1||mn==2)cout<<mn<<endl;
            else if(mn==0)cout<<1<<endl;
            else{
                int x,y;
                x=mn/2;
                y=mn-x;
              if(mn%2==0){
                cout<<x+1<<endl;
              }
              else
                cout<<y<<endl;
            }


        }
    }

return 0;
}
