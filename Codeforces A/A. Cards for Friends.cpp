#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<string>v;
while(t--){
        int w,h,n;
     cin>>w>>h>>n;
    int cnt=1;
    while(w%2==0){
        cnt*=2;
        w/=2;
    }
    while(h%2==0){
        cnt*=2;
        h/=2;
    }
     if(cnt>=n) v.push_back("YES");
     else v.push_back("NO");
     }
for(auto it:v){
    cout<<it<<endl;
}
return 0;
}
