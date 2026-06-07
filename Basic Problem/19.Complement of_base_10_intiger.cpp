#include<bits/stdc++.h>
using namespace std;
int bitwiseComplement(int n) {
        if(n==0)return 1;
        int ans=0,mul=1;
       while(n!=0){
         int rem=n%2;
          rem=rem^1;
         n/=2;
         ans=rem*mul+ans;
         mul=mul*2;

       }
       return ans;
    }
int main(){
 int num;
 cin>>num;
 cout<<"The complement of"<<num<<":"<<bitwiseComplement( num)<<endl;


return 0;
}
