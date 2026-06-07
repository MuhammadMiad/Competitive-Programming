#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v,v1;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
//    for(int i=0;i<n;i++)cout<<arr[i]<< " ";
//    cout<<endl;


 for(int i=0;i<n;i++){
    if(arr[i]!=v[v.size()-1])v1.push_back(arr[i]-(v[v.size()-1]));
    else v1.push_back(arr[i]-(v[v.size()-2]));
 }

    for(int it:v1)cout<<it<<" ";
    cout<<endl;
    v.clear();
    v1.clear();
}


return 0;
}
