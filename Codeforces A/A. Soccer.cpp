#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string >v;
    while(t--){
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;

      if(x<y&&(x1-x)>(y1-y))v.push_back("NO");
      else v.push_back("YES");


    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

return 0;
}
