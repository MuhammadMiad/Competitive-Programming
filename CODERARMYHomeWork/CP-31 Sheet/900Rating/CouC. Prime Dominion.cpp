#include<bits/stdc++.h>
using namespace std;
bool prime(int a){
  if(a==1)return false;
  else if(a<=3)return true;
  else if(a%2)return  false;
  for(int i=2;i*i<=a;i++){
    if(a%i==0)return false;
  }
  return true;

}
int gcd(int a,int b){
  if(a==0)return b;
  return gcd(b%a, a);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mx=-1;
        int index=-1;
        int i;
        for(i=0;i<n-1;i++){
            if( prime(gcd(arr[i+1],arr[i])) and index==-1){
              index=i;
            }
            else if(gcd(arr[i+1],arr[i])==1){
                 if(index!=-1)mx=max(mx,i-index+1);
                 index=-1;
            }
        }
        if(index!=-1)mx=max(mx,i-index+1);


        cout<<mx<<endl;

    }

return 0;
}
