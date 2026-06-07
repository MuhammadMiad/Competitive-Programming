#include<bits/stdc++.h>
using namespace std;
vector<string>generateCode(int N)
   {
        vector<string> v;
        if(N == 1)
        {
            v.push_back("0");
            v.push_back("1");
            return v;

        }
        vector<string> res=generateCode(N-1);
        for(int i = 0; i < res.size(); i++)
        {
            v.push_back("0" + res[i]);

        }
        for(int i = res.size()-1; i >= 0; i--)
        {
            v.push_back("1" + res[i]);

        }
        return v;

   }
   int main(){
   int n=3;
    vector<string>ans=generateCode(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
   return 0;
   }


