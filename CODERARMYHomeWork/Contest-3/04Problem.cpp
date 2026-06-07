#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
sort(begin(arr),end(arr));
int cnt=0,result=0,temp;
for(int i=0;i<n;i++){
    if(i==0){
        temp=arr[i];
        result=1;

    }
    else{
        if(temp==arr[i])result++;
        else if(temp+1==arr[i]){
            cnt+=result;
            temp=arr[i];
            result=1;
        }
        else {
            temp=arr[i];
            result=1;
        }
    }
}
cout<<cnt<<endl;

return 0;
}
