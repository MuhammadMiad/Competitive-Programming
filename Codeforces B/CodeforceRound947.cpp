#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int >v,v1,v2,v3,v4;
vector<int>v5;
while(t--){
    int k,p;
    cin>>k;
    for(int i=0;i<k;i++){
            cin>>p;
        v.push_back(p);
        v1.push_back(p);
    }
    sort(v1.begin(),v1.end());

    int l=-1;

    for(int i=0;i<v.size();i++){
            if(i<=l){
                  v2.push_back(v[i]);
            }
            else {
                  v3.push_back(v[i]);
            }
    }
    l++;


    for(int i=0;i<v3.size();i++){
        v4.push_back(v3[i]);
    }
    for(int i=0;i<v2.size();i++){
        v4.push_back(v2[i]);
    }


    int co=0;
    for(int i=0;i<v4.size();i++){
        if(v1[i]==v4[i]){
            co++;
        }
    }

    if(l>=k-1) {
        v5.push_back(0);
        break;
    }
    else if(co==k){
        v5.push_back(1);
        break;
    }


    v3.clear();
    v4.clear();
    v2.clear();




}

for(int i=0;i<v4.size();i++){
    if(v4[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}


return 0;
}
