#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr;
        for(int i=0;i<n;i++){
                vector<int>v(m);
                int x;
            for(int j=0;j<m;j++){
                cin>>x;
                v[j]=x;

            }
            sort(begin(v),end(v));
            arr.push_back(v);
            v.clear();
        }
       int flag=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                if((arr[i][j]&arr[i+1][j])>0){
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }

        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


            }


return 0;
}
