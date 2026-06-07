#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<int>q;
    for(int i=0;i<n;i++){
         int x;
         cin>>x;
         q.push_back(x);
    }

    vector<int>v;
    for(int i=0;i<n;i++){
            if(i%2==0){
                v.push_back(q.front());
                q.pop_front();
            }
            else{
                v.push_back(q.back());
                q.pop_back();
            }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


return 0;
}
