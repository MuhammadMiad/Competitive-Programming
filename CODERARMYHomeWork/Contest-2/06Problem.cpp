#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long  mx=INT_MIN;
    while(t--){
        long long num;
        cin>>num;
        int cnt=0;
        while(num%2==0){
            cnt++;
            num/=2;
        }
        if(mx<cnt)mx=cnt;
    }
    cout<<mx<<endl;


return 0;
}
