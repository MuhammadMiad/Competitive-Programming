#include<bits/stdc++.h>
using namespace std;
int main(){
string str="rakibrahul";

vector<int>ans(26,0);
for(int i=0;i<str.size();i++){
    ans[str[i]-'a']++;
}
for(int i=0;i<str.size();i++){
    if(ans[str[i]-'a']==1){
        cout<<i<<endl;
        return 0;
    }
}
cout<<"-1"<<endl;
return 0;
}
