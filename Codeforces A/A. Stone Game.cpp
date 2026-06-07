#include<bits/stdc++.h>
using namespace std;
vector<int>v,v1;
void solve(int arr[],int n){
sort(v.begin(),v.end());
int l=0;
int r=n-1;
int c=0,co=0;
while(l<=r){
        c++;
    if(arr[l]==v[v.size()-1])co++;
    else if(arr[l]==v[0])co++;
    if(co==2) break;
l++;
}
int c1=0,co1=0;
for(int i=0;i<n;i++){
        c1++;
    if(arr[i]==v[v.size()-1]||arr[i]==v[0]) co1=1;
    if(co1==1)break;
}
for(int i=n-1;i>=0;i--){
    c1++;
    if(arr[i]==v[v.size()-1]||arr[i]==v[0])co1++;
    if(co1==2) break;
}

 l=0;
r=n-1;
int c2=0,co2=0;
while(l<=r){
        c2++;
    if(arr[r]==v[v.size()-1])co2++;
   else  if(arr[r]==v[0])co2++;
    if(co2==2) break;
r--;
}

 int  mn=min(c,min(c1,c2));
 v1.push_back(mn);
 v.clear();
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)v.push_back(arr[i]);

   solve(arr,n);
}
for(auto it:v1){
    cout<<it<<endl;
}
return 0;
}
