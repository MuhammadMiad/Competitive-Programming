#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int a,b;
        cin>>a;
        int co=0;
        for(int i=1;i<4;i++){
             cin>>b;
             if(a<b){
                co++;
             }

        }
        if(co>0){
          v.push_back(co);
        }
        else
         v.push_back(0);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

return 0;
}
