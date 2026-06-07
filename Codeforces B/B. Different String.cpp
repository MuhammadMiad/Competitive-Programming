#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s,s1;
    cin>>s;
    s1=s;
    sort(s1.begin(),s1.end());
    if(s==s1){
        reverse(s1.begin(),s1.end());
    }
    if(s==s1)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<s1<<endl;
    }
}

return 0;
}
