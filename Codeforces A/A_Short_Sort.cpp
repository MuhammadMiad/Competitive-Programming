#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){

        string s,s1="abc";
        cin>>s;
        if(s==s1){
            v.push_back(1);
        }
        else if(s[1]==s1[1]||s[0]==s1[0]||s[2]==s1[2]){
                v.push_back(1);
          }
          else
            v.push_back(0);

    }
    for(int i=0;i<v.size();i++){
        if(v[i]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

return 0;
}
