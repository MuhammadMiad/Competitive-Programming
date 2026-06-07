//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//int n;
//cin>>n;
//vector<int>arr(n);
//for(int i=0;i<n;i++){
//    cin>>arr[i];
//}
//int mx=INT_MIN;
//vector<int>temp(n);
//for(int i=n-1;i>=0;i--){
//    mx=max(mx,arr[i]);
//    temp[i]=mx;
//}
//int Mx=-1;
//for(int i=0;i<n-1;i++){
//  Mx=max(Mx,temp[i+1]-arr[i]);
//}
//cout<<Mx<<endl;
//
//
//return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++)cin>>arr[i];
 while(next_permutation(arr.begin(),arr.end())){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
 }

return 0;
}
