#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(string &digit,string &num){
 int j=num.size()-1;
 int steps=0;
 while(j>0 and digit[1]!=num[j]){
    j--;
    steps++;
 }
 int i=j-1;
 while(i>0 and digit[0]!=num[i]){
    i--;
    steps++;
 }

return steps;
}
int main(){
    int t;cin>>t;while(t--){
    ll n;cin>>n;
    if(n%25==0){
        cout<<0<<endl;
        continue;
    }
    int mn=20;
    string num=to_string(n);
    string str[]={"00","25","50","75"};
    for(auto &it:str){
        int cnt=solve(it,num);
        mn=min(mn,cnt);
    }
   cout<<mn<<endl;



    }


return 0;
}
