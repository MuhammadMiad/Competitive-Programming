#include<bits/stdc++.h>
using namespace std;
void Parenthesis(int n,int left,int right,string temp,vector<string>&ans){
if(left+right==2*n){
    ans.push_back(temp);
    return;
}
///Left parenthesis
if(left<n){
    temp+='(';
    Parenthesis(n,left+1,right,temp,ans);
}
///Right parenthesis
if(right<left){
    temp+=')';
    Parenthesis(n,left,right+1,temp,ans);
}

}
int main(){
    int n;
    cin>>n;
    vector<string>ans;
    string temp;
    int left=0,right=0;
    Parenthesis(n,left,right,temp,ans);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" , ";
    cout<<endl;

return 0;
}
