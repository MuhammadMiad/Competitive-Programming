#include<bits/stdc++.h>
using namespace std;
string s1;
vector<string >v;
void solve(string s){
     int i=0;
    int l=i+1;
    int r=s.size()-1;
    while(l<=r){
        if(s[i]==s[l]) {
                s1+=s[i];
        i=++l;
    }
    l++;

}
v.push_back(s1);


}
int main(){
int t;
cin>>t;
while(t--){
        s1="";
    int n;
    cin>>n;
    string s;
    cin>>s;
    solve(s);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
