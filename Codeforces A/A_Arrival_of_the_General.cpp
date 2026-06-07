#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,m,p,co=0,mo=0;
int storeMin,storeMax;
cin>>n;
int arr[n];
for(int i=1;i<=n;i++){
    cin>>k;
    arr[i]=k;
}
int Mx=arr[1];
int Min=arr[1];

for(int i=1;i<=n;i++){
  if(Min>arr[i]){
    Min=arr[i];
  }
  if(Mx<arr[i]){
     Mx=arr[i];
  }
}

for(int i=1;i<=n;i++){
    if(Min==arr[i])
           m=i;
           storeMin=m;
}
while(m<n){
       swap(arr[m],arr[m+1]);
       m++;
       co++;
}
for(int i=n;i>=1;i--){
    if(Mx==arr[i]){
           p=i;
           storeMax=p;
    }
}
while(p>1){
    swap(arr[p-1],arr[p]);
    p--;
    mo++;
}
cout<<(n-(storeMin))+(storeMax-1)<<endl;


return 0;
}
