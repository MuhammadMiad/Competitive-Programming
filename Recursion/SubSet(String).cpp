#include<bits/stdc++.h>
using namespace std;
void SubSet(string str,int index,int n,vector<string>&ans,string temp){
  if(index==n){
    ans.push_back(temp);
    return;
  }
   ///Not included
  SubSet(str,index+1,n,ans,temp);
  temp.push_back(str[index]);
  ///included
  SubSet(str,index+1,n,ans,temp);
  ///if temp er age and sign  dei tahle eta dite hobe.na dile dite hobe na.
  //temp.pop_back();
}
int main(){
    string str="abc";
    int n=3;
    vector<string>ans;
    string temp;
    SubSet(str,0,n,ans,temp);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
}

return 0;
}

