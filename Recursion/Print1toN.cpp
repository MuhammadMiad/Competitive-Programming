#include<bits/stdc++.h>
using namespace std;
int Print(int n){
cout<<n<<endl;
if(n==1){
    return 0;
}
return Print(n-1);

}
int main(){
    int n;
    cin>>n;
    Print(n);
return 0;
}
