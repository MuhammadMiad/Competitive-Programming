#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n),v1(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)cin>>v1[i];
    sort(begin(v),end(v));
    sort(begin(v1),end(v1));
    int flag=1;
    for(int i=0;i<n;i++){
        if(v[i]!=v1[i]){
            cout<<"no"<<endl;
            flag=0;
            break;
        }

    }
    if(flag)
    cout<<"yes"<<endl;


return 0;
}
