#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    if(n%2==0){
        v.push_back(n/2);
    }
    else
        v.push_back(n/2+1);

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
