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
            int index=i;
        for(int j=i+1;j<n;j++){
            if(v[index]>v[j])index=j;
        }
        swap(v[i],v[index]);
    }
    for(auto it:v)cout<<it<<" ";
    cout<<endl;

return 0;
}
