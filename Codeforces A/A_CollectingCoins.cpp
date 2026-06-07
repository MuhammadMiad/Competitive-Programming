#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v,v1;
    while(t--){
        int n,k;
        for(int i=0;i<3;i++){
             cin>>k;
             v.push_back(k);
        }
         cin>>n;
        sort(v.begin(),v.end());

        int sum=(v[2]-v[0])+(v[2]-v[1]);

       if(sum>n){
        v1.push_back(0);
       }
       else if(sum==n){
        v1.push_back(1);
       }
       else
       {        int ans;
           ans=n-sum;
           if(ans%3==0){
            v1.push_back(1);
           }
           else{
            v1.push_back(0);
           }
       }
       v.clear();

    }

    for(int i=0;i<v1.size();i++){
        if(v1[i]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


return 0;
}
