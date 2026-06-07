#include<bits/stdc++.h>
using namespace std;
int main(){
    string  n;
    int a,x=0;
cin>>a;

for (int i=0;i<a;i++){
    cin>>n;
    if (n[1] =='+'){
        x++;
    }
    else
        --x;
}
cout<< x<<endl;

return 0;
}
