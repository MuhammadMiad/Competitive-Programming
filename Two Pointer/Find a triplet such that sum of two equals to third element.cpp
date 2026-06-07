#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n){
    int a=0;
for(int i=0;i<n;i++){
        int x=arr[n-i-1];
int l=0;
int r=n-i-2;
while(l<r){
    int sum=arr[l]+arr[r];
    if(sum==x) {
        cout<<arr[l]<< " "<<arr[r]<< " = "<<x<<endl;
        return ;
        a=1;
    }
    if(sum>x)r--;
    else l++;
}


}
if(a==0) cout<<"NO such triplet exist"<<endl;

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
solve(arr,n);


return 0;
}
