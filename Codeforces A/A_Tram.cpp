#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,ans=0,Max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
       ans=ans-a;
       ans=ans+b;

       Max=max(Max,ans);
    }
    cout<<Max<<endl;

return 0;
}
