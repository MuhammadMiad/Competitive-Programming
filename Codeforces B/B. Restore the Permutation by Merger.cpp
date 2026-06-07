#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void solve(int arr[],int n){
    v.push_back(arr[0]);
for(int i=1;i<2*n;i++){

 int l=0;
int r=v.size()-1;
while(l<=r){
    if(arr[i] ==v[l]){
    i++;
    l=0;
    }
  l++;

}
v.push_back(arr[i]);

}

for(int i=0;i<v.size()-1;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.clear();

}
int main(){
    int t;
    cin>>t;
    vector<int>st;
    while(t--){
        int n;
        cin>>n;
        int arr[n*2];
        for(int i=0;i<2*n;i++)cin>>arr[i];

       solve(arr,n);


    }
return 0;
}
