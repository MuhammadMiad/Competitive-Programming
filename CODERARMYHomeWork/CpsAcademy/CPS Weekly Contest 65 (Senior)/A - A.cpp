#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
     long long n,m;
     cin>>n>>m;
     long long sum1=0,sum2=0;
     vector<long long>arr(n),brr(m);
     for(int i=0;i<n;i++){
        cin>>arr[i];
        sum1+=arr[i];
     }
     for(int i=0;i<m;i++){
        cin>>brr[i];
        sum2+=brr[i];
     }

     if(sum1==sum2){
        cout<<"Draw"<<endl;
     }
     else if(sum1>sum2){
        cout<<"Tsondu"<<endl;
     }
     else{
        cout<<"Tenzing"<<endl;
     }


  }

return 0;
}
