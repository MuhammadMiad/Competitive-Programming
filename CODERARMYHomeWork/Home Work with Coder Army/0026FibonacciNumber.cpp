#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    for(int i=0;i<n;i++){
     cout<<a<<" ";
     int tem=a;
     a=b;
     b+=tem;
    }

return 0;
}
