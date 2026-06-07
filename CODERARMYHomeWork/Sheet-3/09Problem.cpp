#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int fmn=INT_MAX;
    int smn=INT_MAX;
    int f,s;
    for(int i=0;i<n;i++){
        if(fmn>v[i]){
          fmn=v[i];
         f=i+1;
        }
    }

    for(int i=0;i<n;i++){
        if(smn>v[i]&&fmn!=v[i]){
          smn=v[i];
         s=i+1;
        }
    }
    cout<<smn+fmn+abs(s-f)<<endl;
    }

return 0;
}
