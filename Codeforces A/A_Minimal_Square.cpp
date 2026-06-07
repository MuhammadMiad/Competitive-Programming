#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    vector<int>v1,v;
    while(n--){
        for(int j=0;j<2;j++){
                 cin>>a;
                 v1.push_back(a);
            }
            sort(v1.begin(),v1.end());
            reverse(v1.begin(),v1.end());

        if(v1[0]<=v1[1]*2){
            v.push_back((v1[1]*2)*(v1[1]*2));
        }
        else if(v1[0]>v1[1]*2){
            v.push_back(v1[0]*v1[0]);
        }

        v1.clear();
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


return 0;
}
