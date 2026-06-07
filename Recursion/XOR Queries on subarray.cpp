#include<bits/stdc++.h>
using namespace std;
vector<int>arr,q[100];
//vector<vector<int>>q;
void Querie(){
vector<int >pre;
pre.push_back(arr[0]);

for(int i=1;i<arr.size();i++){
    pre.push_back(pre[i-1]^arr[i]);
}

vector<int>ans;
for(int i=0;i<arr.size();i++){
    int l,r;
    l=q[i][0];
    r=q[i][1];
    if(l==0) ans.push_back(pre[r]);
    else{
        ans.push_back(pre[r]^pre[l-1]);
    }
}

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
int main(){
    int n,k,a,b;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);

    }
    for(int i=0;i<n;i++){
        cin>>a>>b;
        q[i].push_back(a);
        q[i].push_back(b);
    }

Querie();

return 0;
}
