#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
vector<int>v;
while(t--){
    cin>>n;
    string s,s1="Timur";
    cin>>s;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());

   if(s==s1){
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
