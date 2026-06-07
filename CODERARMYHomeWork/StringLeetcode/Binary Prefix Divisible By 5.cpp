#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int rem=0;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        rem=(rem*2+arr[i])%5;

        ans[i]=(rem==0);
    }

    for(auto &it:ans){
        cout<<(it==1?"true":"false")<<" ";
    }
    cout<<endl;

return 0;
}
