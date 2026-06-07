#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
     int n;cin>>n;
     string str;cin>>str;
     int first=0,second=0;
     for(int i=0;i<n;i++){
        if(str[i]=='(')first++;
        else if(str[i]==')' and first>0)first--;
        else second++;
     }
     cout<<second<<endl;

    }


return 0;
}
