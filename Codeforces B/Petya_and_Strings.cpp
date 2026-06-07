#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=0;
    string f,s;
    cin>>f>>s;
    for(int i=0;i<f.size();i++){
        if(isupper(f[i]))
           f[i]= tolower(f[i]);
    }
     for(int i=0;i<s.size();i++){
        if(isupper(s[i]))
           s[i]= tolower(s[i]);
    }
 for(int i=0;i<s.size();i++){
    if(f[i]>s[i]){
           ans=1;
        break;
    }
    else if(f[i]<s[i]){
         ans=-1;
      break;
    }


 }
 if(ans==1)
    cout<<"1"<<endl;
   else if(f==s)
        cout<<"0"<<endl;
    else if(ans==-1) cout<<"-1"<<endl;


return 0;
}
