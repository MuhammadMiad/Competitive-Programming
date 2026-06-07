#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=b-a;
        map<int,int>mp1,mp2;
        for(int i=0;i<32;i++){
            if(a&1==1)mp1[i]++;
            a=a>>1;
        }
        for(int i=0;i<32;i++){
            if(b&1==1)mp2[i]++;
            b=b>>1;
        }

        for(auto it:mp1){
            cout<<it.first<<"  "<<it.second<<endl;
        }

    }


return 0;
}
