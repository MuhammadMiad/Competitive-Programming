#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int x;
    cin>>x;
    x--;
    arr.erase(begin(arr)+x);
    int a,b;
    cin>>a>>b;
    a--,b--;
    for(int i=a;i<b;b--){
        arr.erase(begin(arr)+i);
    }
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
    cout<<endl;


return 0;
}
