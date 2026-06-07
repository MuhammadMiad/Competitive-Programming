#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];
int pre[N];
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
     cin>>arr[i];
     pre[i]=pre[i-1]+arr[i];   /*save memory : Now Time complexity O(n)+O(Q)*/
}                             /*   Before Time Complexity O(n)+O(n*Q) */

int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    int presum=0;
//    for(int i=l;i<=r;i++){
//        presum+=arr[i];
//    }
presum=pre[r]-pre[l-1];
    cout<<presum<<endl;
}


return 0;
}
