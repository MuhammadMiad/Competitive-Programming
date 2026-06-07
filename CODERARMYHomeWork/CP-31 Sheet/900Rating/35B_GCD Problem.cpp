/**                               In the name Allah

                                         Miad
                                  handle:muhammadmiad
                                  muhammadmiad25@gmail.com
*/#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[]={2,3,5,7,11,13,17,19,23,29};
        int store=0;
        for(int i=0;i<10;i++){
            if((n-arr[i]-1)%arr[i]){
                store=arr[i];
                break;
            }
        }
        cout<<store<<" "<<n-store-1<<" "<<1<<endl;
    }

return 0;
}
