#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
    vector<int>v;
    while(t--){
        int m,x;
        cin>>m;
        int n=10;
        for(int i=n-1;i>=0;i--){
            if(arr[i]<=m){
                x=m-arr[i];
                break;
            }
        }
        v.push_back(x);
    }
 for(int it:v)cout<<it<<endl;

return 0;
}
