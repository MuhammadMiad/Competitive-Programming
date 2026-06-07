#include<bits/stdc++.h>
using namespace std;
void Find(int n,int zero,int one,string &temp,vector<string>&ans){
if(temp.size()==n){
    ans.push_back(temp);
    return;
}

temp.push_back('1');
Find(n,zero,one+1,temp,ans);
temp.pop_back();

if(zero<one){
    temp.push_back('0');
    Find(n,zero+1,zero,temp,ans);
    temp.pop_back();
}

}
int main(){
int n;
cin>>n;
vector<string>ans;
string temp;
int zero=0,one=0;
Find(n,zero,one,temp,ans);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}
return 0;
}
