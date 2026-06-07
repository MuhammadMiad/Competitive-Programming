#include<bits/stdc++.h>
using  namespace std;
int main(){
  int n,k,co;
    cin>>n;
    vector<int>v;
    for(int m=0;m<n;m++){
             cin>>k;
             v.push_back(floor((k-1)/2));
    }

    for(auto i:v){
        cout<<i<<endl;
    }



return  0;
}
