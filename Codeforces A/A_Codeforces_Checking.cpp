#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int >v;
while(n--){
    char ch;
    string s="codeforces";
    cin>>ch;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            c++;
        }
    }
    if(c>0){
            v.push_back(1);
    }
    else
        v.push_back(0);

}
for(int i=0;i<v.size();i++){
    if(v[i]==1){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

return 0;
}
