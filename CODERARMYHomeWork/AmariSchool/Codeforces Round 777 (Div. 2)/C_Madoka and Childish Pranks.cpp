#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        vector<pair<pair<int,int>,pair<int,int>>>ans;
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             if(str[i][j]=='1'){
               if(j-1>=0){
                ans.push_back({{i+1,j},{i+1,j+1}});
               }
               else if(i-1>=0){
                ans.push_back({{i,j+1},{i+1,j+1}});
               }
               else{
                flag=1;
                break;
               }
             }
            }
            if(flag)break;
        }
        if(flag){
            cout<<-1<<endl;
        }
        else{
         cout<<ans.size()<<endl;
         for(auto it:ans){
            cout<<it.first.first<<" "<<it.first.second<<" "<<it.second.first<<" "<<it.second.second<<endl;
         }
        }

    }


return 0;
}
