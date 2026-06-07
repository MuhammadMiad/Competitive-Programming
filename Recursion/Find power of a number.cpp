#include<bits/stdc++.h>
using namespace std;
void Beauti(int n){
 if(n==1){
    cout<<n<<endl;
    return ;
 }
 cout<<n<<" ";
 Beauti(n-1);
 cout<<n<<" ";
}
int main(){
int n;
cin>>n;
Beauti(n);
return 0;
}
