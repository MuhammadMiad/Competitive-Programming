#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,cou=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        if(p<q&&p<=(q-2))
            cou++;
    }
    cout<<cou<<endl;

return 0;
}
