#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int a,b,c;
   cin>>a>>b>>c;
    int x=abs(a-1);
    int y=abs(b-c)+abs(c-1);
    if(x<y){
        v.push_back(1);
    }
    else if(x>y){
        v.push_back(2);
    }
    else if(x==y){
        v.push_back(3);
    }

}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
