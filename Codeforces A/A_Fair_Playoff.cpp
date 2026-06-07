#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,t=4;
cin>>n;
vector<int>v,v1;
for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
               cin>>k;
    v.push_back(k);
        }

        int m=max(v[0],v[1]);
        int p=max(v[2],v[3]);

        if(m<v[2]&&m<v[3]){
            //cout<<"NO"<<endl;
            v1.push_back(0);
        }
        else if(p<v[0]&&p<v[1]){
           // cout<<"NO"<<endl;
            v1.push_back(0);
        }
        else{
            //cout<<"YES"<<endl;
             v1.push_back(1);
        }
     v.clear();
}

for(int i=0;i<v1.size();i++){
    if(v1[i]==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}


return 0;
}
