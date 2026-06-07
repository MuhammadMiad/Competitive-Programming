#include<bits/stdc++.h>
using namespace std;
void solve(set<int>&st,int n){
    for(int i=1;i<=sqrt(n);i++){
     if(n%i==0){
        st.insert(i);
        st.insert(n/i);
     }
    }
}
int main(){
    int n;cin>>n;
    set<int>st;
    solve(st,n);
    for(auto it:st)cout<<it<<" ";
    cout<<endl;



return 0;
}
