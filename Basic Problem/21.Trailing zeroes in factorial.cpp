#include<bits/stdc++.h>
using namespace std;
int  TrailingZeroes(int  n){
    int cnt=0;
    while(n>=5){
        cnt+=n/5;
        n/=5;
    }
    return cnt;
}
int main(){
int num;
cin>>num;
cout<<"The number of trailing zero is:"<<TrailingZeroes(num)<<endl;
return 0;
}
