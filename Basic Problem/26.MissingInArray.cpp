#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
int arr[N-1];
int sum=0;
for(int i=0;i<N-1;i++){
    cin>>arr[i];
    sum+=arr[i];
}

int ans=N*(N+1)/2;
cout<<"Missing in Array: "<<ans-sum<<endl;
return 0;
}
