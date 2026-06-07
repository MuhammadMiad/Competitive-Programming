#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>arr(1,1);
   while(n){
        int carry=0;
    for(int i=0;i<arr.size();i++){
        int x=arr[i]*n+carry;
        arr[i]=x%10;
        carry=x/10;
    }
    while(carry){
        int x=carry%10;
        arr.push_back(x);
        carry/=10;

    }
    n--;
   }
   reverse(begin(arr),end(arr));
   for(int i=0;i<arr.size();i++){
    cout<<arr[i];
   }
   cout<<endl;

return 0;
}
