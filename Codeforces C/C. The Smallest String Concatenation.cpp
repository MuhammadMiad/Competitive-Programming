#include<bits/stdc++.h>
using namespace std;
bool compare(string  &a,string &b){
           return a+b<b+a;

}
int main(){
int n;cin>>n;
vector<string>arr(n);
for(int i=0;i<n;i++){
    string str;cin>>str;
    arr[i]=str;
}


sort(begin(arr),end(arr),compare);

string ans;
for(int i=0;i<n;i++){
    ans+=arr[i];
}

cout<<ans<<'\n';


return 0;
}
