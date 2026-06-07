#include<bits/stdc++.h>
using namespace std;
void subsequence(string &str,int index,int n,string temp,vector<string>&ans){
 if(index==n){
    ans.push_back(temp);
    return;
 }

subsequence(str,index+1,n,temp,ans);
  temp+=str[index];
subsequence(str,index+1,n,temp,ans);


}
int main(){
  string str;cin>>str;
  vector<string>ans;
  string temp;
  int index=0;
  subsequence(str,index,str.size(),temp,ans);
  //sort(begin(ans),end(ans));
  for(auto &it:ans){
     cout<<it<<endl;
  }
  cout<<endl;


return 0;
}
