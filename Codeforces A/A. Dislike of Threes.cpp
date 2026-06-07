#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void solve(int n){

int l=1;
int r=n;
while(l<=r){
    if(l%3==0||l%10==3)r++;
    l++;
}
v.push_back(r);



}
int main(){
int t;
cin>>t;
while(t--){
    int k;
    cin>>k;
    solve(k);

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
