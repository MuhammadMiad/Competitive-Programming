#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[100000];
///Fibonacci function create
ll  fibonacci(int num){
if(num<=1)return num;
if(dp[num]!=-1)return dp[num];
ll f=fibonacci(num-1);
ll s=fibonacci(num-2);
cout<<f+s<<",";
return dp[num]=f+s;
}
///Main function
int main(){
 memset(dp,-1,sizeof(dp));
int num;
cin>>num;
cout<<"Fibonacci Series:0,1,";
ll value=fibonacci(num);
cout<<"\n\n"<<num<<" th fibonacci value:"<<value<<endl;


return 0;
}
