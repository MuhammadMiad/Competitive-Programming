#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,co=0;
cin>>n;
string s,s1="Timru";
vector<int>v1;
vector<char>v;
for(int i=0;i<n;i++){
    cin>>k;
    cin>>s;
    for(int l=0;l<k;l++){
        v.push_back(s[l]);
    }
    sort(v.begin(),v.end());

    if(v.size()==5){
            co=0;
          for(int j=0;j<v.size();j++){
              if(v[j]==s1[j]){
                    co++;

              }
          }
           if(co==5){
                    v1.push_back(1);
            }
            else
                v1.push_back(0);


                v.clear();

    }
    else
        v1.push_back(0);


}

for(int i=0;i<v1.size();i++){
    if(v1[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


return 0;
}
