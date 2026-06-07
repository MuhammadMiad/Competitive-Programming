#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,r,b;cin>>n>>r>>b;
    vector<int>ans(b+1,r/(b+1)); 
    int ex=r-((b+1)*(r/(b+1)));
    int i=0;
    while(ex--){
        ans[i++]++;
    }
    string ss="";
    int j=0;
    int flag=true;
    for(int i=0;i<ans.size()+b;i++){
        if(flag){
             ss+=string(ans[j++],'R');
             flag=!flag;
        }
        else{
         ss+='B';
         flag=!flag;
        }   
    }

    cout<<ss<<endl;
}
int main(){
    int t;cin>>t;while(t--)
       solve();
    return 0;
}