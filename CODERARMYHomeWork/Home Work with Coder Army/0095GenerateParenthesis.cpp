#include<bits/stdc++.h>
using namespace std;
void Paren(int n,int left,int right,string &temp,vector<string>&ans){
   if(left+right==2*n){
    ans.push_back(temp);
    return;
   }
   ///Left Parenthesis
   if(left<n){
   temp+='(';
   Paren(n,left+1,right,temp,ans);
   temp.pop_back();
   }
   ///Right Parenthesis
   if(right<left){
   temp+=')';
   Paren(n,left,right+1,temp,ans);
      temp.pop_back();

   }
}
int main(){
    int n;
    cin>>n;
    vector<string>ans;
    string temp;
    Paren(n,0,0,temp,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }




return 0;
}
