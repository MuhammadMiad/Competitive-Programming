#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int >v;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=10){
        v.push_back(1);
    }
    else if(a+c>=10){
        v.push_back(1);
    }
    else if(b+c>=10){
        v.push_back(1);
    }
    else
        v.push_back(0);
}
for(int i=0;i<v.size();i++){
    if(v[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;
}
