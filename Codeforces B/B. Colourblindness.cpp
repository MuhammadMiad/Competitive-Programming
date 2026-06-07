#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    int co=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'&&s1[i]=='R'){
            co++;
        }
       else if(s[i]=='B'&&s1[i]=='B'){
            co++;
        }

          else if(s[i]=='G'&&s1[i]=='G'){
            co++;
        }
        else if(s[i]=='G'&&s1[i]=='B'){
           co++;
        }

         else if(s[i]=='B'&&s1[i]=='G'){
            co++;
        }


    }

    if(co==s.size()){
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
