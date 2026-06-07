#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Decimal Number:";
cin>>n;
vector<int>v;
while(n){
    int rem=n%8;
    n=n/8;
    v.push_back(rem);
}
for(int i=v.size()-1;i>=0;i--){
    cout<<v[i];
}
cout<<endl;

return 0;
}
