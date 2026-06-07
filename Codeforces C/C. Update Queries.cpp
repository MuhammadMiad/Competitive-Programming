#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<string>v;
while(t--){i
    int n,m;
    cin>>n>>m;
    int arr[m];
    string s,s1,s3="";
    cin>>s;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cin>>s1;
    for(int i=0;i<m;i++){
        s[arr[i]-1]=s1[i];
    }
    v.push_back(s);

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
