#include<bits/stdc++.h>
using namespace std;
void Find(int n,int one,int zero,string &temp,vector<string>&ans){
 if(temp.size()==n){
    ans.push_back(temp);
    return;
 }
 if(zero<one){
    temp+='0';
    Find(n,one,zero+1,temp,ans);
    temp.pop_back();
 }
 temp+='1';
 Find(n,one+1,zero,temp,ans);
 temp.pop_back();

}
int main(){
    int n;
    cin>>n;
    vector<string>ans;
    string temp;
    Find(n,0,0,temp,ans);
    for(auto it:ans)cout<<it<<endl;

return 0;
}
