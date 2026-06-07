#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
int mx=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mx=max(mx,arr[i]);
}
int x=mx/n;
int y=mx%n;
if(y==0){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
else{

}



return 0;
}
