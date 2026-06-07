#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={49999,24433534,42222,9,2};
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);
for(int i=0;i<n;i++){
    string s=to_string(arr[i]);
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)cout<<s[i]<<" ";
    cout<<endl;
}
cout<<endl;

return 0;
}
