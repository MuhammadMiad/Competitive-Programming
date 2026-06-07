#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    set<int>st;
    while(t--){
        int y,x;cin>>y>>x;;
        if(y==1){
          st.insert(x);
        }
        else if(y==2){
          st.erase(x);
        }
        else{
           if(st.find(x)!=st.end())cout<<"Yes"<<endl;
           else cout<<"No"<<endl;
        }
    }


return 0;
}
