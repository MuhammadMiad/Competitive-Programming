#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<int>arr(n,m/n);
    int rem=m%n;
    for(int i=0;i<rem;i++){
      arr[i]++;
    }


    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;


  return 0;
}
