#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<char >v;
    while(t--){
        char arr[8][8];
   for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
           cin>>arr[i][j];
    }

    }
 for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
                if('a'<=arr[i][j]&&arr[i][j]<='z'){
                     v.push_back(arr[i][j]);
                }

        }

   }
    for(int i=0;i<v.size();i++){
    cout<<v[i];
 }
 cout<<endl;

 v.clear();
   }


return 0;
}
