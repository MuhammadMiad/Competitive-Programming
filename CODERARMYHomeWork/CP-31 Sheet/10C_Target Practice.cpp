#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>>arr(10,vector<char>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
            }
        }
       long long  int cnt=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
              if(arr[i][j]=='X'){
                if(i+j<10){
                    cnt+=min(i,j)+1;
                }
                else if(i+j>=10){
                    cnt+=(9-max(i,j))+1;
                }
              }
            }
        }
        cout<<cnt<<endl;

    }

return 0;
}
