#include<bits/stdc++.h>
using namespace std;
#define cn(x) cin>>x
#define iarr(arr,n) for(int i=0;i<n;i++){cin>>arr[i]; }
#define run_arr(i,x,y) for(int i=x;i<=y;i++)
int gcd(int a,int b){
    if(a==0)return b;
    return gcd(b%a, a); };
int main(){
int n;
cn(n);
vector<int>arr(n);
iarr(arr,n);
int x=gcd(arr[0],arr[1]);
run_arr(i,2,n-1){
x=gcd(x,arr[i]);
}
cout<<x*n<<endl;

return 0;
}
