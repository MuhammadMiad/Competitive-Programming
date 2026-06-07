#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    int co=0,c=0;
    for(int i=0;i<2*n;i++){
        if(arr[i]%2==0){
            co++;
        }
        else{
            c++;
        }
    }
    if(co==c){
        v.push_back(1);
    }
    else{
        v.push_back(0);
    }
}
for(int i=0;i<v.size();i++){
    if(v[i]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;
}
