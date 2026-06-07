#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int co=0,c=0;
    for(int i=0;i<=s.size();i++){

        if(co==1&&c==1){
            break;
        }
       else if(s[i]=='U'){
            co++;
        }
        else if(s[i]=='D'){
            co--;
        }
        else if(s[i]=='R'){
            c++;
        }
        else if(s[i]=='L'){
             c--;
        }

    }


    if(co==1&&c==1){
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
