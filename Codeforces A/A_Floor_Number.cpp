#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int  a,b;
        cin>>a>>b;
        if(a<=2){
            v.push_back(1);
        }
        else{
          int c=a-2;
          if(c%b==0){
            v.push_back(c/b+1);
          }
        else
              v.push_back((c/b)+2);
        }

        }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


return 0;
}
