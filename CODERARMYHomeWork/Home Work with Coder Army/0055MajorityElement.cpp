//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)cin>>arr[i];
//
//    map<int,int>mp;
//    for(int i=0;i<n;i++)mp[arr[i]]++;
//
//    int mx=INT_MIN;
//    int store;
//    for(auto it:mp){
//        if(it.second>mx){
//                mx=it.second;
//                store=it.first;
//
//        }
//    }
//    cout<<"Majority Element: "<<store<<endl;
//
//return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int candidate,cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            candidate=arr[i];
        }
        else{
            if(candidate==arr[i])cnt++;
            else cnt--;
        }

    }
    cout<<"Majority Element:"<<candidate<<endl;

return 0;
}
