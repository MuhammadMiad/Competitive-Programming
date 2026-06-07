#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   vector<int>ans;
   ans.push_back(a);
   ans.push_back(b);
   ans.push_back(c);
   sort(begin(ans),end(ans));

   cout<<ans[ans.size()-1]+ans[ans.size()-2]<<endl;

return 0;
}
