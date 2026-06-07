#include<bits/stdc++.h>
using namespace std;
void Rotate(vector<int>&v,int n){
    int x=v[n-1];
 for(int i=n-1;i>=0;i--){
        v[i]=v[i-1];
 }
 v[0]=x;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int k;
    cout<<"How many rotate to right side"<<endl;
    cin>>k;
    while(k--){
        Rotate(v,n);
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;


return 0;
}
