#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a==b){
        v.push_back(0);

    }
    else if(a<b){
            int c=b-a;
         if(c%2==1){
            v.push_back(1);
         }
         else {
            v.push_back(2);
         }
    }
    else if(a>b){
        int c=a-b;
        if(c%2==0){
            v.push_back(1);
        }
        else{
            v.push_back(2);
        }
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
