#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    for(int i=0;i<n;i++){
        if(arr[i]/n==2)cout<<"Repeating Value is: "<<i+1<<endl;
        if(arr[i]/n==0)cout<<"Missing Value is: "<<i+1<<endl;
    }




return 0;
}
