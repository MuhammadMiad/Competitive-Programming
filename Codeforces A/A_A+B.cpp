#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin>>t;
    int  p=t+1;
    vector<int >v,v1;
    while(p--){
        string s;
        getline(cin,s);
        int m;
        for(int i=0;i<s.size();i++){
            if(s[i]!='+'){
                  m=(int)s[i]-48;
                  if(0<= m&& m <=9){
                  v.push_back(m);
           }
            }
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
           ans+=v[i];
        }
        v1.push_back(ans);

        v.clear();
    }

    for(int i=1;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }

return 0;
}
