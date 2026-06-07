#include<bits/stdc++.h>
using namespace std;
void Product(int n,int m){
    int sum=1;

    for(int i=1;i<n;i++){
        sum*=i;
    }
   // cout<<sum<<endl;
    if(sum%m==1){
        cout<<n-1<<endl;
        for(int i=1;i<n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else if(sum%m!=1){

        Product(n-1,m);

    }

}
int main(){
int n;
cin>>n;
Product(n,n);


return 0;
}
