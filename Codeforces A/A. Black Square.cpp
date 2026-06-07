#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
for(int i=0;i<4;i++){
    cin>>arr[i];
}
string s;
cin>>s;
int sum=0;
for(int i=0;i<s.size();i++){
        int m=(int) s[i]-48;
   sum+=arr[m-1];
}

cout<<sum<<endl;


return 0;
}
