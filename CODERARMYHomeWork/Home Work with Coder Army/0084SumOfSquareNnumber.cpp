#include<bits/stdc++.h>
using namespace std;
int  Square(int n){
 if(n==1)return 1;
 return n*n+Square(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<Square(n)<<endl;



return 0;
}
