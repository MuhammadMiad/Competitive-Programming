#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>target;

    int i=0,j=0,sum=0;
    int length=INT_MAX;
    while(j<n){
        sum+=arr[j];
        while(sum>=target and i<=j){
            length=min(length,(j-i)+1);
            sum-=arr[i];
            i++;
        }
        j++;
    }
    if(length==INT_MAX)cout<<0<<endl;
    else cout<<length<<endl;


return 0;
}
