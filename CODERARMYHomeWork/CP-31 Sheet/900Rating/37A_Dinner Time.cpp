/**                            IN THE NAME OF ALLAH
                                    Miad
                               muhammadmiad25@gmail.com


*/#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        if(n%p==0 and (n/p)*q!=m)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }


return 0;
}
