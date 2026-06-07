#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
  vector<bool>pan(26,0);
  for(int i=0;i<str.size();i++){
    pan[str[i]-'a']=1;
  }
  for(int i=0;i<26;i++){
    if(pan[i]==0){
        cout<<"Not pangram."<<endl;
         return 0;
    }

  }
  cout<<"Pangram"<<endl;

return 0;
}
