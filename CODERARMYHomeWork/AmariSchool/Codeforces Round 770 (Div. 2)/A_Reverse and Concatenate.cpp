#include<bits/stdc++.h>
using namespace std;
bool rev(string s){
 int l=0;
 int r=s.size()-1;
 while(l<r){
    if(s[l]!=s[r])return 0;
    l++,r--;
 }
 return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(rev(s))cout<<1<<endl;
        else if(k==0)cout<<1<<endl;
        else cout<<2<<endl;

    }


return 0;
}
