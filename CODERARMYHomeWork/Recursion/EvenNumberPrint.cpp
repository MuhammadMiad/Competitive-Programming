#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n<2)return;

    solve(n-2);
    cout<<n<<" ";
}
int main(){
    int n;cin>>n;

    if(n%2==1)n--;
     solve(n);

return 0;
}
