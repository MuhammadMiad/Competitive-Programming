#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n){
for(int i=0;i<n;i++){
        unordered_set<int>s;
    for(int j=i+1;j<n;j++){
        int x=-(arr[i]+arr[j]);
           if(s.find(x)!=s.end()){
            cout<<arr[i]<<" "<<arr[j]<< " "<<x<<endl;
           }
           else{
            s.insert(arr[j]);
           }

    }
}

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
solve(arr,n);


return 0;
}
