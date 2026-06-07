#include<bits/stdc++.h>
using namespace std;
vector<int>l,r;
void MAH_NSL(vector<int>arr){
    int n=arr.size();
stack<pair<int,int>>st;
for(int i=0;i<n;i++){
    if(st.size()==0)l.push_back(-1);
    else if(st.size()>0 and st.top().first<arr[i])l.push_back(st.top().second);
    else if(st.size()>0 and st.top().first>=arr[i]){
        while(st.size()>0 and st.top().first>=arr[i])st.pop();
        if(st.size()==0)l.push_back(-1);
        else l.push_back(st.top().second);
    }
    st.push({arr[i],i});
}
}

void MAH_NSR(vector<int>arr){
    int n=arr.size();
stack<pair<int,int>>s;
for(int i=n-1;i>=0;i--){
    if(s.size()==0)r.push_back(n);
    else if(s.size()>0 and s.top().first<arr[i])r.push_back(s.top().second);
    else if(s.size()>0 and s.top().first>=arr[i]){
        while(s.size()>0 and s.top().first>=arr[i])s.pop();
        if(s.size()==0)r.push_back(n);
        else r.push_back(s.top().second);
    }
    s.push({arr[i],i});
}
reverse(r.begin(),r.end());
}
int MAH(vector<int>v){
MAH_NSL(v);
MAH_NSR(v);
int mx=-1;
for(int i=0;i<l.size();i++){
     int total=r[i]-l[i]-1;
    mx=max(mx,total*v[i]);
}
r.clear();
l.clear();
return mx;
}
int main(){
 int arr[4][5]={
           {1,0,1,0,0},
           {1,0,1,1,1},
           {1,1,1,1,1},
           {1,0,0,1,0}
           };

  int n=5,m=4;
  vector<int>v;
  for(int j=0;j<n;j++)v.push_back(arr[0][j]);

  int mx=MAH(v);
  for(int i=1;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==0){
             v[j]=0;
        }
        else {
            v[j]=v[j]+arr[i][j];
        }
       // cout<<v[j]<<" ";
    }
    //cout<<endl;
    mx=max(mx,MAH(v));
  }
cout<<mx<<endl;
return 0;
}
