#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int n;
    cin>>n;
    char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    if(n<=28){
        cout<<"aa"<<arr[n-2-1]<<endl;
    }
    else{
        n-=26;
        if(n>27)cout<<arr[n-27]<<"zz"<<endl;
        else cout<<"a"<<arr[n-1-1]<<"z"<<endl;
    }
 }

return 0;
}
