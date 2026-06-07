#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,a,coun=0;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            if(ar[i]>=ar[k-1] && ar[i]>0){
                coun++;
            }
        }

    cout<<coun<<endl;

return 0;
}
