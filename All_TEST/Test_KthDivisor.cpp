#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void Divisor(int n){
for(int i=1;i*i<=n;i++){
        if(n%i==0){
                v.push_back(i);
                int x=n/i;
                v.push_back(x);
    }
}
}
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n;
    Divisor(n);
    sort(v.begin(),v.end());
    cout<<"Enter position of Divisor"<<"1 to "<<v.size()<<" : "<<endl;
    cin>>k;
    cout<<v[k-1]<<endl;
    v.clear();
}
return 0;
}
