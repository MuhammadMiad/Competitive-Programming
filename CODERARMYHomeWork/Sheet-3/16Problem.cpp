#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int odd=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2!=0)odd=1;
    }
    if(odd==1)cout<<0<<endl;
    else{
            int cnt=0;
         while(1){
           for(int i=0;i<n;i++){
            if(v[i]%2!=0){
                odd=1;
                break;
            }else{
                v[i]/=2;
            }
           }
           if(odd==1){
            cout<<cnt<<endl;
            break;
           }

           else cnt++;
         }

    }


return 0;
}
