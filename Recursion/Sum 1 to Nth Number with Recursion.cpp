#include<bits/stdc++.h>
using namespace std;
int Sum(int  n){

if(n==0) return 0;
else return  n+Sum(n-1);

}
int main(){
int n;
cin>>n;
cout<<"Summation of 1 to "<<n<<" -> "<<Sum(n)<<endl;

return 0;
}
