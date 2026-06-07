#include<bits/stdc++.h>
using namespace std;
int main(){
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
set<int>st;
for(int i=1;i<=d;i++){
    if(k*i<=d){
      st.insert(k*i);
    }
     if(l*i<=d){
        st.insert(l*i);
    }
    if(m*i<=d){
        st.insert(m*i);
    }
    if(n*i<=d){
        st.insert(n*i);
    }

}

cout<<st.size()<<endl;
   return 0;
}
