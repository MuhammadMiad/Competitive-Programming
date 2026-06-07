#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
     int a,b;
     cin>>a>>b;
     int sum=a+b;
     if(sum%2==0){
        v.push_back(2);
     }
     else{
        v.push_back(1);
     }
}
for(int  i=0;i<v.size();i++){
    if(v[i]==1){
        cout<< "Alice"<<endl;
    }
    else
        cout<< "Bob" <<endl;
}

return 0;
}
