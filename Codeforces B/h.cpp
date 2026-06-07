#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string>v;
    while(t--){
char arr[4][4];
for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        cin>>arr[i][j];
    }
}
int co=0;
for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
       if((arr[i+1][j+2]=='h'&&arr[i][j]=='h')||(arr[i+2][j+1]=='h'&&arr[i][j]=='h')){
        co++;
       }
    }
}
if(co>0)v.push_back("Yes");
else v.push_back("No");
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
