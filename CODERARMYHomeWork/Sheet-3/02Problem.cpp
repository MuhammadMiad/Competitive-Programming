#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    int flag=1;
    for(int i=0;i<n;i++){
        if(v[i]==k){
            flag=0;
            cout<<i<<endl;
            break;
        }
    }
    if(flag==1)cout<<-1<<endl;

return 0;
}
