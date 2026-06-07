///Approach-2

#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={4,3,2,1,2,7,6};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)arr[i]--;

for(int i=0;i<n;i++){
    arr[arr[i]%n]+=n;
}

for(int i=0;i<n;i++){
    if(arr[i]/n==0){
        cout<<"Missing value:"<<i+1<<endl;
    }
    else if(arr[i]/n==2){
            cout<<"Repeating value:"<<i+1<<endl;
    }
}
return 0;
}
