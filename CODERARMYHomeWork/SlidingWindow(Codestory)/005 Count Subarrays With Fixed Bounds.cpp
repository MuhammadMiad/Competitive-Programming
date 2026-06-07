#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mink,maxk;
    cin>>n>>mink>>maxk;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    int minposition=-1;
    int maxposition=-1;
    int leftbound=-1;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]<mink ||arr[i]>maxk){
            leftbound=i;
        }
        if(arr[i]==mink)minposition=i;
        if(arr[i]==maxk)maxposition=i;

        cnt+=max(0,min(minposition,maxposition)-leftbound);
    }

    cout<<cnt<<endl;


return 0;
}
