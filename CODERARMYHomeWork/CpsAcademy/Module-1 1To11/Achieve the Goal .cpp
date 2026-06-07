#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m;cin>>n>>k>>m;
    vector<int>arr(n);
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int cal=abs((n*m)-sum);

    if(cal==m)cout<<0<<endl;
    else if(cal>k)cout<<-1<<endl;
    else cout<<cal<<endl;



return 0;
}
