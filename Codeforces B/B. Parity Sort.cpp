#include<bits/stdc++.h>
using namespace std;
vector<string >v;
void solve(int arr[],int n){
   for(int i=0;i<n-1;i++){
     int mn=arr[i];
     int l=i+1;
     int r=n;
     int x;
    while(l<r){
       if(arr[i]%2==arr[l]%2&&mn>arr[l]){
        mn=arr[l];
        x=l;
       }
       l++;

   }
   swap(arr[i],arr[x]);


    }
   if(is_sorted(arr,arr+n)) v.push_back("YES");
   else v.push_back("NO");


}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    solve(arr,n);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}


return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//int arr[]={1,2,3,4,0};
//swap(arr[0],arr[4]);
//for(int i=0;i<5;i++){
//    cout<<arr[i]<<  "  ";
//}
//return 0;
//}
