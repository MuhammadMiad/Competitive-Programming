#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int cnt=0;
    while(num){

       if((num&1)!=0)cnt++;
       num=num>>1;

    }
    cout<<cnt<<endl;

return 0;
}
