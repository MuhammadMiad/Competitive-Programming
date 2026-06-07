///Effective  for Sorted and Unsorted both this two sum method.

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>v(n),s(2);
   for(int i=0;i<n;i++)cin>>v[i];
   int target;
   cin>>target;
   map<int,int>mp;
   for(int i=0;i<n;i++){
    int rem=target-v[i];
    if(mp.find(rem)!=mp.end()){
        s[0]=mp[rem];
        s[1]=i;
        break;
    }
    mp[v[i]]=i;
   }

   cout<<"Index of two sum: "<<s[0]<<" and "<<s[1]<<endl;
return 0;
}
