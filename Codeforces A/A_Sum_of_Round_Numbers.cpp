#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cou=0;
    cin>>n;
    vector <int>v;
    for(int i=1;i<=n;i++){
        cin>>k;
    cou=0;
       if(k%10!=0)
       {
           v.push_back(k%10);
           k=k-(k%10);
           cou++;
       }
       if(k%100!=0){
         v.push_back(k%100);
        k=k-(k%100);
        cou++;
       }
       if(k%1000!=0){
         v.push_back(k%1000);
        k=k-(k%1000);
        cou++;
       }
       if(k%10000!=0){
          v.push_back(k%10000);
        k=k-(k%10000);
        cou++;
       }

        if(k%10000==0 &&k>=10000){
          v.push_back(k);
        cou++;
       }
      cout<<cou<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   v.clear();

    }



return 0;
}
