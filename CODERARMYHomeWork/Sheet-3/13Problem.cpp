#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(mn>v[i])mn=v[i];
      if(mx<v[i])mx=v[i];
    }
    for(int i=0;i<n;i++){
        if(mn==v[i]){
            v[i]=mx;
        }
       else if(mx==v[i])v[i]=mn;
    }
     for(auto it:v)cout<<it<<" ";
     cout<<endl;


return  0;
}
