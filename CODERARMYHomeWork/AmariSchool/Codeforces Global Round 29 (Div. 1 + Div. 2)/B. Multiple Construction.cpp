//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//int t;cin>>t;
//while(t--){
//    int n;cin>>n;
//    map<int,int>mp;
//    int x;
//    for(int i=0;i<n;i++){
//        cin>>x;
//        mp[x]++;
//    }
//    vector<int>arr;
//    for(auto it:mp)arr.push_back(it.second);
//    sort(begin(arr),end(arr));
//    int  mx=0;
//    int m=arr.size();
//    for(int i=0;i<arr.size();i++){
//
//        mx=max(mx,(m-i)*arr[i]);
//    }
//    cout<<mx<<endl;
//}
//
//
//return 0;
//}
///B.Multiple Construction
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
    cout<<n<<" ";
    for(int i=1;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}

