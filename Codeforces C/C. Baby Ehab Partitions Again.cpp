#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=1;i<=n;i++)  cin>>arr[i];
if(Partition(arr,n)==true)

return 0;
}
