#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<char>v;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a-b==c){
        v.push_back('-');
    }
    else if(a+b==c){
        v.push_back('+');
    }
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
