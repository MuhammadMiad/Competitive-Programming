#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<long long>temp(n);
    temp[0]=arr[0];

    for(int i=1;i<n;i++){
        temp[i]=temp[i-1]+arr[i];
    }
    for(auto it:temp)cout<<it<<" ";
    cout<<endl;

//    if(k==0){
//        for(auto it:arr)cout<<it<<" ";
//        cout<<endl;
//    }
//    else if(n<k*2+1){
//        for(int i=0;i<n;i++)cout<<-1<<" ";
//        cout<<endl;
//    }
//    else{
//        for(int i=k;i<n-k;i++){
//            if(i-k-1>=0)arr[i]=(arr[i+k]-arr[i-k-1])/(k*2+1);
//            else arr[i]=(arr[i+k])/(k*2+1);
//        }
//        for(int i=0;i<k;i++)arr[i]=-1;
//        for(int i=n-k;i<n;i++)arr[i]=-1;
//        for(auto  it:arr)cout<<it<<" ";
//        cout<<endl;

   // }


return 0;
}
