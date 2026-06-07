#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<char>v;
vector<int >v1;
while(n--){
        string s;
        cin>>s;
        if(s.size()%2==0){
            for(int i=0;i<s.size();i++){
                v.push_back(s[i]);
            }
            int co=0;
            for(int i=0;i<v.size()/2;i++){
                if(v[i]==v[(v.size()/2)+i]){
                        co++;
                }
            }
      //      cout<<co<<endl;
             if(co==(v.size()/2)){
                        v1.push_back(1);
                     }
                     else
                        v1.push_back(0);

                     v.clear();
        }
        else{
             // cout<<"NO"<<endl;
               v1.push_back(0);
        }

}
for(int i=0;i<v1.size();i++){
    if(v1[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;
}
