#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Decimal number:";
cin>>n;
vector<int>v;
int i=0;
while(n){
    int rem=n%2;
     n=n/2;
     v.push_back(rem);

}
for(int i=v.size()-1;i>=0;i--){
    cout<<v[i];
}
cout<<endl;

return 0;
}
