#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),temp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        temp.push_back(arr[0]);
        for(int i=1;i<n;i++){
          if(arr[i-1]>arr[i]){
            temp.push_back(arr[i]);
            temp.push_back(arr[i]);
          }
          else temp.push_back(arr[i]);
        }

        cout<<temp.size()<<endl;
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }

return 0;
}
