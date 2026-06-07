#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
   int m=max(a,b);
    if(abs(a-b)*2<c)v.push_back(-1);
    else if(abs(a-b)*2<4)v.push_back(-1);
    else if(abs(a-b)*2<m)v.push_back(-1);
    else if(abs(a-b)*2>=c+abs(a-b))v.push_back(c+abs(a-b));
    else if(c-abs(a-b)>0)v.push_back(c-abs(a-b));

}
for(int it:v)cout<<it<<endl;
return 0;
}
