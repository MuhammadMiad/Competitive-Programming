#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Decimal number:";
    cin>>n;
    string str="";
    while(n){
        int rem=n%16;
        n=n/16;
        if(rem>9){
            char ch='A'+rem-10;
            str+=ch;
        }
        else{
            char c=rem+'0';
            str+=c;
        }


    }
    reverse(begin(str),end(str));
    cout<<str<<endl;


return 0;
}
