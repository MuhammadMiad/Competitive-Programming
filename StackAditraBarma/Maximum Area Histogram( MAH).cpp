#include<bits/stdc++.h>
using namespace std;
vector<int>l,r;
void MAH_NSL(int arr[],int n){
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

void MAH_NSR(int arr[],int n){
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
int main(){
int histogram[]={2,4};
int n=sizeof(histogram)/sizeof(histogram[0]);
MAH_NSL(histogram,n);
MAH_NSR(histogram,n);
int mx=-9;
for(int i=0;i<l.size();i++){
     int total=r[i]-l[i]-1;
    mx=max(mx,total*histogram[i]);
}
cout<<mx<<endl;
return 0;
}
