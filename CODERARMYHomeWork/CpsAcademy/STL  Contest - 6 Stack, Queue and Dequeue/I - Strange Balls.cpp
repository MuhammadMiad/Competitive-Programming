#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    stack<pair<int,int>>st;
    int ans=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ans++;
        if(st.empty()){
            st.push({x,1});
            cout<<ans<<endl;
        }
        else if(x==st.top().first){
          int occurance=st.top().second;
          occurance++;
          if(occurance==x){
            ans-=x;
            st.pop();
            cout<<ans<<endl;
          }
          else{
            st.top().second++;
            cout<<ans<<endl;
          }
        }
        else{
            st.push({x,1});
            cout<<ans<<endl;
        }
    }


return 0;
}
