#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        cin>>s;
     transform(s.begin(),s.end(), s.begin(),::toupper);

     if(s=="YES"){
        v.push_back("YES");
     }
     else
     v.push_back("NO");

    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }



return 0;
}
