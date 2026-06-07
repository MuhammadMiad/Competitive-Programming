#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int >v;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int minDiff=20000;
    for(int i=1;i<n;i++){
      minDiff=min(minDiff,arr[i] -arr[i-1]);
        }
   v.push_back(minDiff);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
