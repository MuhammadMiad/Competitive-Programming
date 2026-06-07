#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;
   string str;
   cin>>str;
   deque<char>q;
   for(int i=0;i<str.size();i++){
       q.push_back(str[i]);
   }
   int opening=0;
   for(int i=0;i<str.size();i++){
        if(str[i]=='(')opening++;
        else if(str[i]==')'){
            opening--;
            if(opening<0){
                q.push_front('(');
                opening=0;
            }
        }

   }
   for(int i=1;i<=opening;i++){
    q.push_back(')');
   }
  for(auto &p:q)cout<<p;
  cout<<endl;

return 0;
}
