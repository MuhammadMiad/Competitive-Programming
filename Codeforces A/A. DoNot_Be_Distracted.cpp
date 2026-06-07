#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<char,int>mp;
   vector<int>v;
  while(n--){
        int k;
        cin>>k;
        string s;
        cin>>s;

        for(int i=0;i<k;i++){
            mp[s[i]]++;
        char z=s[i];
        while(s[i]==z){
             i++;
           }
           i--;
        }
        int ans=0;
   for(auto it:mp){
     if(it.second>1){
            ans=1;
       // cout<<it.first<< " "<<it.second<<endl;
     }

   }
   if(ans==1){
    v.push_back(0);
   }
   else{
    v.push_back(1);
   }
   mp.clear();
}

for(int i=0;i<v.size();i++){
    if(v[i]==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}
