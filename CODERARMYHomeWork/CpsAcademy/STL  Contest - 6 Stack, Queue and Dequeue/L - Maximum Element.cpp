#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    stack<pair<int,int>>p;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1){
            int a;cin>>a;
            if(p.empty()){
                 p.push({a,a});
            }
            else{
               p.push({a,max(a,p.top().second)});
            }

        }
        else if(x==2){
            p.pop();
        }
        else if(x==3){
            cout<<p.top().second<<endl;
        }
    }



return 0;
}
