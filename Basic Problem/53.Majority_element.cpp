///approach-1 using map
///approach-2
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={3,3,2,3,1,3,2,2,1,3,3};
int n=sizeof(arr)/sizeof(arr[0]);
int candidate,count=0;
for(int i=0;i<n;i++){
    if(count==0){
        count=1;
        candidate=arr[i];
    }else{
       if(candidate==arr[i])count++;
       else count--;
    }
}
cout<<"Majority Element:"<<candidate<<endl;
return 0;
}
