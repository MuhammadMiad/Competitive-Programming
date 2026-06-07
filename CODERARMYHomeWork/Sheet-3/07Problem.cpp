#include<bits/stdc++.h>
using namespace std;
bool Palindrome(vector<int>&v,int n){
 int f=0;
 int s=n-1;
 int flag=1;
 while(f<s){
    if(v[f]!=v[s]){
        flag=0;
        break;
    }
    f++,s--;
 }
 if(flag)return 1;
 else return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
     cin>>v[i];
    }
    bool ans=Palindrome(v,n);
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

return 0;
}
