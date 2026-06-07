#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;


    if(a<b&&b<c )
    {
        v.push_back(b);
    }
    else if(a<c&&c<b){
        v.push_back(c);
    }
    else if(b<a&&a<c)
    {
        v.push_back(a);
    }
     else if(c<a&&a<b){
        v.push_back(a);
    }
     else if(b<c&&c<a){
        v.push_back(c);
    }
      else if(c<b&&b<a){
        v.push_back(b);
    }

}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
