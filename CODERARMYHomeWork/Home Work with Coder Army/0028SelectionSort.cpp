#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
         cin>>v[i];
    }
    for(int i=0;i<n;i++){
      int mn=i;
      for(int j=i+1;j<n;j++){
        if(v[j]<v[mn])mn=j;
      }
      int temp=v[i];
        v[i]=v[mn];
        v[mn]=temp;

    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;

return 0;
}
