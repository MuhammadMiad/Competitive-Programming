#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    deque<pair<int,int>>q;
    for(int i=1;i<=n;i++){
        q.push_back({i,0});
    }

    while(m--){
        int t;cin>>t;
        if(t==1){
            char ch;cin>>ch;
            int dx=0,dy=0;
            if(ch=='U')dy=1;
            else if(ch=='D')dy=-1;
            else if(ch=='L')dx=-1;
            else if(ch=='R')dx=1;

            int x=q.front().first+dx;
            int y=q.front().second+dy;
            q.push_front({x,y});
            q.pop_back();
        }
        else{
         int k;cin>>k;

         cout<<q[--k].first<<" "<<q[k].second<<endl;

        }
    }



return 0;
}
