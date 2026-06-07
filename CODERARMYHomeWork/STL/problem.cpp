#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)arr[i]=i;
        int cnt,flag;
        while(1){
                int co=0;
                int alice;
                 flag=0;
                 cnt=0;
            for(int i=0;i<n;i++){
                if(co==0 and arr[i]!=-1){
                    alice=arr[i];
                    arr[i]=-1;
                }
                if(abs(3-arr[i]==alice)){
                    flag=1;
                    arr[i]=-1;
                    break;
                }
                if(arr[i]==-1)cnt++;
            }
            if(flag==0)break;
            if(cnt==n)break;
        }
        if(cnt==n)cout<<"Bob"<<endl;
        if(flag)cout<<"Alice"<<endl;
    }

return 0;
}
