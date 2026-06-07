#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==2){
        cout<<n<<" ";
        return;
    }
    fun(n-2);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    if(n%2==1)n--;
    fun(n);
return 0;
}
