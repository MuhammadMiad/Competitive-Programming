#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        string s;
        cin>>s;
        int fsum=0;
        int lsum=0;
        for(int i=0;i<3;i++){
            fsum+=(int )s[i];
            lsum+=(int )s[i+3];
        }
        if(fsum==lsum){
             v.push_back(1);
        }
        else
            v.push_back(0);

    }
for(int i=0;i<v.size();i++){
    if(v[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;
}
