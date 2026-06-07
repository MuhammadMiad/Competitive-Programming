#include<bits/stdc++.h>
using namespace std;
int Square(int n){
    if(n==0)return 0;
    return n*n+Square(n-1);
}

int main(){
    int num;
    cin>>num;
    cout<<Square(num)<<endl;


return 0;
}
