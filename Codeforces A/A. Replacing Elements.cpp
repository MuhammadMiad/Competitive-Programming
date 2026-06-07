#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n){
for(int i=0;i<n;i++){
    int l=0;
}
}
int main(){
int t;
cin>>t;
vector<string>v;
while(t--){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int  co=0,c=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=d)co++;
    }
    if(n==co)v.push_back("YES");
    else{
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]<=d)c++;
            }
        }
        if(c>0)v.push_back("YES");
        else v.push_back("NO");
    }
}
for(string  it:v)cout<<it<<endl;
return 0;
}
