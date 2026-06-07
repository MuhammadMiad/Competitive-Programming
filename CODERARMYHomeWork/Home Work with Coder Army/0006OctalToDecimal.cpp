#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Octal Number:";
    cin>>n;
    int mul=1,ans=0;
    while(n){
        int rem=n%10;
        n/=10;
        ans+=rem*mul;
        mul*=8;
    }
    cout<<ans<<endl;




return 0;
}
