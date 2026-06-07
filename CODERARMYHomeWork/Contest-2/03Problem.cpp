#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k;
 cin>>n>>k;
 int mn,cnt=0,flag=1;
 for(int i=0;i<n;i++){
    int value;
    cin>>value;
    if(flag){
        mn=value;
        flag=0;
    }
    else{
        if(mn>value)mn=value;
    }
    cnt++;
    if(cnt==k||i==n-1){
        cout<<mn<<" ";
        flag=1;
        cnt=0;
    }
 }
return 0;
}
